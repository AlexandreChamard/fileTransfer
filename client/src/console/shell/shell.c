/*
** main.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/shell
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 19:27:40 2017 alexandre Chamard-bois
** Last update Thu Nov 16 19:27:14 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "shell.h"
#include "macro.h"

int end = FALSE;

void print_pwd()
{
	char pwd[1024];

	getcwd(pwd, 1024);
	printf("\e[1;34m%s\e[0;39m$ ", pwd);
	fflush(stdout);
}

int shell()
{
	char *line = NULL;
	size_t size = 0;
	int ret;

	while (!end) {
		print_pwd();
		if ((ret = getline(&line, &size, stdin)) <= 0) {
			perror(NULL);
			free(line);
			return (1);
		}
		trim(line);
		if (*line != '\n') {
			pars_cmd(line);
		}
	}
	free(line);
	return (0);
}

int exec_args(int ac, char **av)
{
	size_t avancement = 0;
	size_t len = 0;
	char *line;

	for (int i = 1; i < ac; i++) {
		len += strlen(av[i]);
	}
	if (!(line = malloc(sizeof(char) * (len + ac)))) {
		return (1);
	}
	for (int i = 1; i < ac; i++) {
		strcpy(line + avancement, av[i]);
		avancement += strlen(av[i]) + 1;
		line[avancement - 1] = ' ';
	}
	line[avancement - 1] = 0;
	pars_cmd(line);
	free(line);
	return (0);
}
