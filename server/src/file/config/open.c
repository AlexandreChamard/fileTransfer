/*
** open.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src/file/config
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:55:08 2017 alexandre Chamard-bois
** Last update Wed Nov 01 15:15:24 2017 alexandre Chamard-bois
*/

#include <stdlib.h>
#include <stdio.h>
#include "config.h"

int open_config_file(server_config_t *config)
{
	FILE	*fp;

	(void)config;
	if (!(fp = fopen(CONFIG_FILE_NAME, "r"))) {
		dprintf(2, "%s: File not found.\n", CONFIG_FILE_NAME);
		return (1);
	}
	/* parsing*/
	fclose(fp);
	return (0);
}
