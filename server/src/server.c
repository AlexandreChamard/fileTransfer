/*
** server.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 14:52:40 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "info.h"

void    launch_server(t_server_info *info)
{
        TRY((info->fd = socket(AF_INET, SOCK_STREAM, 0)), STD_F);
}

void    close_server(t_server_info *info)
{
        close(info->fd);
}
