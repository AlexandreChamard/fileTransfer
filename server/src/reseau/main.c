/*
** main.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 16:49:21 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdio.h>

#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "info.h"

int                     main(int ac, char **av)
{
        t_server_info   info;
	(void)ac;
	(void)av;
	printf("server\n");
        launch_server(&info);
        close_server(&info);
	return (EXIT_S);
}
