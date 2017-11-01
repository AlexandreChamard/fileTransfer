/*
** home.c for SERVER in /home/alexandre/Documents/git/fileTransfert/server/src/init
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 18:53:17 2017 alexandre Chamard-bois
** Last update Wed Nov 01 19:08:46 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include "sys/types.h"
#include "string.h"
#include "stdio.h"

int valid_home(void *data, char *buff, size_t size)
{
	if (size > FILENAME_MAX) {
		puts("Size max is 255 characters.");
		return (1);
	}
	strncpy(data, buff, size - 1);
	return (0);
}

int set_default_home(void *data)
{
	char cwd[FILENAME_MAX] = "";

	getcwd(cwd, 255);
	strcpy(data, cwd);
	return (0);
}
