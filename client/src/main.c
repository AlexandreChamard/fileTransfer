/*
** main.c for Client in /home/alexandre/Documents/git/fileTransfert/client/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:51:21 2017 alexandre Chamard-bois
** Last update Fri Nov 03 14:24:33 2017 Guilhem
*/

#include <stdio.h>
#include <string.h>

#include "reseau.h"

int 			main(int ac, char **av)
{
	reseau_info_t	info;

	(void)ac;
	(void)av;
	memset(&info, '\0', sizeof(reseau_info_t));
	info.address = strdup(DEFAULT_ADDR);
	info.port = DEFAULT_PORT;
	launch_client(&info);
	close_client(&info);
	printf("client\n");
	return (0);
}
