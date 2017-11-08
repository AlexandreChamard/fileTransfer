/*
** size.c for SERVER in /home/alexandre/Documents/git/fileTransfert/server/src/init
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Sun Nov 05 11:45:06 2017 alexandre Chamard-bois
** Last update Sun Nov 05 11:55:57 2017 alexandre Chamard-bois
*/

#include "sys/types.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"

int valid_size(void *data, char *buff, size_t size)
{
	long nb = atoi(buff);

	if (size == 1) {
		return (0);
	}
	if (nb <= 0) {
		puts("The size must be a positive number.");
		return (1);
	}
	*(long*)data = nb;
	return (0);
}

int set_default_size(void *data)
{
	*(long*)data = 1024 * 1024;
	return (0);
}
