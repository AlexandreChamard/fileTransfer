/*
** command_exit.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/commands
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:28:37 2017 alexandre Chamard-bois
** Last update Wed Nov 15 23:41:39 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdio.h>

int cmd_shell_cd(int ac, char **av)
{
	int ret;

	if (ac == 1) {
		ret = chdir("/");
	} else {
		ret = chdir(av[1]);
	}
	if (ret) {
		perror(NULL);
	}
	return (ret);
}
