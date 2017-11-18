/*
** command_exit.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/commands
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:28:37 2017 alexandre Chamard-bois
** Last update Wed Nov 15 23:41:46 2017 alexandre Chamard-bois
*/

#include "shell.h"
#include "macro.h"

int cmd_exit(int ac, char **av)
{
	(void)ac;
	(void)av;
	end = TRUE;
	return (0);
}
