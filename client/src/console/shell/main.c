/*
** main.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/shell
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 19:27:40 2017 alexandre Chamard-bois
** Last update Tue Nov 14 23:40:14 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
#include "macro.h"

int end = FALSE;

int loop()
{
	char *line = NULL;
	size_t size = 0;

	while (!end) {
		if (getline(&line, &size, stdin) <= 0) {
			free(line);
			return (1);
		}
		pars_cmd(trim(line));
	}
	free(line);
	return (0);
}

int main(int ac, char **av)
{
	int ret;
	(void)ac;
	(void)av;

	ret = loop();
	return (ret);
}
