/*
** init.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src/init
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 15:19:09 2017 alexandre Chamard-bois
** Last update Wed Nov 01 16:13:55 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"

int get_info(char *info, char *name_info)
{
	size_t 		buff_size = 128;
	int 		valid = 0;
	char 		*buffer;
        size_t 		readed = buff_size + 1;

	if (!(buffer = (char*) malloc((buff_size + 1) * sizeof(char)))) {
		exit(1);
	}
	while (!valid) {
		memset(buffer, 0, readed);
		valid = 1;
		printf("%s ", name_info);
		readed = getline(&buffer, &buff_size, stdin);
		if (readed > 128) {
			printf("There is a maximum of 128 characters.\n");
			valid = 0;
		}
	}
	strncpy(info, buffer, readed - 1);
	free(buffer);
	return (0);
}

int init_server(server_config_t *config)
{
	// char buff[128] = "";

	get_info(config->home, "Home (default: pwd):");
	get_info(config->references, "references (default: Home/references):");
	get_info(config->data, "data (default: Home/data):");
	// write(STDOUT_FILENO , "max_size (default: 1024Ko):", 27);
	// read(STDIN_FILENO, buff, 127);
	return (0);
}
