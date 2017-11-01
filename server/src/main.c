/*
** main.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 15:49:44 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <string.h>
#include "config.h"
#include "init.h"

void print_config(server_config_t *config)
{
	printf("home: %s\n", config->home);
	printf("references: %s\n", config->references);
	printf("data: %s\n", config->data);
}

int main(int ac, char **av)
{
	server_config_t config = {"", "", "", 0};

	if (ac == 2 && !strcmp(av[1], "init")) {
		init_server(&config);
	}
	// if (open_config_file(&config)) {
	// 	return (1);
	// }
	print_config(&config);
	return (0);
}
