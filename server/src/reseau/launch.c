/*
** server.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 21:04:25 2017 Guilhem
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
        memset(buff, '\0', BUFF_SIZE);
        while (TRUE) {
                TRY((buff_len = recv(sockfd, buff, BUFF_SIZE, 0)),
                        STD_ERR, close(sockfd), close_server(info));
                if (buff_len == 0)
                        break;
                handle_request(info, buff);
                memset(buff, '\0', buff_len);
        }
        close(sockfd);
}

void    launch_server(reseau_info_t *info)
{
        info->addr.sin_family = AF_INET;
        info->addr.sin_addr.s_addr = htonl(INADDR_ANY);
        info->addr.sin_port = htons(info->port);
        TRY((info->fd = socket(AF_INET, SOCK_STREAM, 0)), STD_ERR);
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
