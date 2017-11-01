/*
** server.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 19:21:57 2017 Guilhem
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "reseau.h"

void    launch_server(reseau_info_t *info)
{
        TRY((info->fd = socket(AF_INET, SOCK_STREAM, 0)), STD_F);
        info->addr.sin_family = AF_INET;
        info->addr.sin_addr.s_addr = htonl(INADDR_ANY);
        info->addr.sin_port = htons(info->port);
        TRY(bind(info->fd, &(struct sockaddr)info->addr,
                sizeof(info->addr)), STD_F);
}

void    close_server(reseau_info_t *info)
{
        close(info->fd);
}
