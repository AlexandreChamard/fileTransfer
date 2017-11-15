/*
** main.c for Client in /home/alexandre/Documents/git/fileTransfert/client/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:51:21 2017 alexandre Chamard-bois
** Last update Wed Nov 15 23:44:47 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <string.h>

#include "reseau.h"
#include "shell.h"

void reseau()
{
	reseau_info_t	info;

	memset(&info, '\0', sizeof(reseau_info_t));
	info.address = strdup(DEFAULT_ADDR);
	info.port = DEFAULT_PORT;
	launch_client(&info);
	close_client(&info);
	printf("client\n");
}

int 			main(int ac, char **av)
{
	int ret;
	(void)ac;
	(void)av;

	ret = shell();
	return (ret);
}
