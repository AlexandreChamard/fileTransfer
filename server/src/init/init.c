/*
** init.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src/init
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 15:19:09 2017 alexandre Chamard-bois
** Last update Wed Nov 01 19:25:02 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "init.h"
#include "config.h"

static const pars_info_t g_infos[] = {
	{"Home (default: pwd):", NULL, NULL},
	{"references (default: Home/references):", NULL, NULL},
	{"data (default: Home/data):", NULL, NULL},
	{"Size (default: 1024Ko)", NULL, NULL},
};

int get_info(void *data, char *prompt, func_valid_t is_valid, func_default_val_t set_default)
{
	size_t 		buff_size = FILENAME_MAX;
	int 		valid = 0;
	char 		*buffer;
	size_t 		readed = buff_size + 1;

	if (!(buffer = malloc((buff_size + 1) * sizeof(char)))) {
		exit(1);
	}
	while (!valid) {
		memset(buffer, 0, readed);
		valid = 1;
		printf("%s ", prompt);
		readed = getline(&buffer, &buff_size, stdin);
		if (is_valid(data, buffer, readed)) {
			valid = 0;
		}
	}
	if (!*buffer) {
		set_default(data);
	}
	free(buffer);
	return (0);
}

int init_server(server_config_t *config)
{
	get_info(config->home, g_infos[HOME].prompt, g_infos[HOME].valid, g_infos[HOME].def_val);
	get_info(config->references, g_infos[REF].prompt, g_infos[REF].valid, g_infos[REF].def_val);
	get_info(config->data, g_infos[DATA].prompt, g_infos[DATA].valid, g_infos[DATA].def_val);
	get_info(&config->max_space, g_infos[SIZE].prompt, g_infos[SIZE].valid, g_infos[SIZE].def_val);
	return (0);
}
