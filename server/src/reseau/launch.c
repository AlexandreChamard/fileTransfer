/*
** server.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 20:40:47 2017 Guilhem
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "reseau.h"

static void                    handle_connexion(reseau_info_t *info)
{
        socklen_t       addrlen;
        ssize_t         buff_len;
        int             sockfd;
        char            buff[BUFF_SIZE];

        addrlen = sizeof(info->addr);
        TRY((sockfd = accept(info->fd, (struct sockaddr *)&info->addr,
                &addrlen)), STD_ERR, close_server(info));
        TRY((buff_len = recv(sockfd, buff, BUFF_SIZE, 0)),
                STD_ERR, close_server(info));
        handle_request(info, buff);
        memset(buff, '\0', buff_len);
}

void    launch_server(reseau_info_t *info)
{
        TRY((info->fd = socket(AF_INET, SOCK_STREAM, 0)), STD_ERR);
        info->addr.sin_family = AF_INET;
        info->addr.sin_addr.s_addr = htonl(INADDR_ANY);
        info->addr.sin_port = htons(info->port);
        TRY(bind(info->fd, (struct sockaddr *)&info->addr,
                sizeof(info->addr)), STD_ERR, close_server(info));
        TRY(listen(info->fd, MAX_CLIENTS), STD_ERR, close_server(info));
        while (TRUE)
                handle_connexion(info);
}

void    close_server(reseau_info_t *info)
{
        close(info->fd);
}
