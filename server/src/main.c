/*
** main.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 17:32:28 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "config.h"
#include "init.h"

int                     main(int ac, char **av)
{
	server_config_t config;

	memset(&config, 0, sizeof(server_config_t));
	launch_server(&config.reseau);
	if (ac == 2 && !strcmp(av[1], "init")) {
		init_server(&config);
	}
	// if (open_config_file(&config)) {
	// 	return (1);
	// }
	print_config(&config);
	close_server(&config.reseau);
	return (EXIT_S);
}
