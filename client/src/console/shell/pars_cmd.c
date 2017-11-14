/*
** pars_cmd.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/shell
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:18:28 2017 alexandre Chamard-bois
** Last update Tue Nov 14 23:38:47 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "command.h"
#include "shell.h"
#include "macro.h"

static const tab_commands_t g_commands[] = {
	{"exit", cmd_exit},
	{"debug", cmd_debug},
	{NULL, NULL}
};

int pars_cmd(char *line)
{
	int ret;
	int ac;
	char **av;

	for (int i = 0; g_commands[i].cmd; i++) {
		if (wordcmp(line, g_commands[i].cmd) == TRUE) {
			if (!(av = get_args_cmd(line, &ac))) {
				return (1);
			}
			ret = g_commands[i].func(ac, av);
			free(av);
			return (ret);
		}
	}
	puts("Command not found.");
	return (1);
}
