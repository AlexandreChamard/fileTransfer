/*
** reseau.h for SERVER in /home/alexandre/Documents/git/fileTransfert/server/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 17:21:12 2017 alexandre Chamard-bois
** Last update Sat Nov 04 17:28:23 2017 Guilhem
*/

#ifndef SERVER_RESEAU_H_
# define SERVER_RESEAU_H_

#include <sys/socket.h>
#include <arpa/inet.h>

#include "macro.h"

/* Declarations of structures */

typedef struct                  s_reseau_info {
        struct sockaddr_in      addr;
        int                     port;
        int                     fd;
}                               reseau_info_t;

/* Declarations of functions */

        /* Server specific */

void    launch_server(reseau_info_t *info);
void    close_server(reseau_info_t *info);

        /* Requests specific */

void    handle_request(reseau_info_t *info, char *buff);

#endif
