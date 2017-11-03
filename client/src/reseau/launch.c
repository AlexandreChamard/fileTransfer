/*
** launch.c for fileTransfer in /home/guilhem/C/fileTransfer/client/src/reseau
**
** Made by Guilhem
** Login   <guilhem@epitech.net>
**
** Started on  Fri Nov 03 13:39:16 2017 Guilhem
** Last update Fri Nov 03 14:38:00 2017 Guilhem
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "reseau.h"

void    launch_client(reseau_info_t *info)
{
        info->addr.sin_family = AF_INET;
        info->addr.sin_addr.s_addr = inet_addr(info->address);
        info->addr.sin_port = htons(info->port);
        TRY((info->fd = socket(AF_INET, SOCK_STREAM, 0)), STD_ERR,
                free(info->address));
        TRY(connect(info->fd, (struct sockaddr *)&info->addr,
                sizeof(info->addr)), STD_ERR, close_client(info));
        TRY(send(info->fd, "Bite\n", 5, 0), STD_ERR, close_client(info));
}

void    close_client(reseau_info_t *info)
{
        close(info->fd);
        free(info->address);
}
