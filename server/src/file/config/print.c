/*
** print.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src/file/config
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 17:13:40 2017 alexandre Chamard-bois
** Last update Wed Nov 01 17:14:07 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include "config.h"

void print_config(server_config_t *config)
{
	printf("home: %s\n", config->home);
	printf("references: %s\n", config->references);
	printf("data: %s\n", config->data);
}
