/*
** server.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 17:36:38 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "reseau.h"

void    launch_server(reseau_info_t *info)
{
        TRY((info->fd = socket(AF_INET, SOCK_STREAM, 0)), STD_F);
}

void    close_server(reseau_info_t *info)
{
        close(info->fd);
}
