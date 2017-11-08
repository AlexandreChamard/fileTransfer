/*
** reseau.h for fileTransfer in /home/guilhem/C/fileTransfer/client/include
**
** Made by Guilhem
** Login   <guilhem@epitech.net>
**
** Started on  Fri Nov 03 13:39:41 2017 Guilhem
** Last update Fri Nov 03 14:01:06 2017 Guilhem
*/

#ifndef CLIENT_RESEAU_H_
# define CLIENT_RESEAU_H_

#include <sys/socket.h>
#include <arpa/inet.h>

#include "macro.h"

/* Declarations of structures */

typedef struct                  reseau_info_s
{
        struct sockaddr_in      addr;
        char                    *address;
        int                     fd;
        int                     port;
}                               reseau_info_t;

/* Declarations of functions */

        /* Client specific */

void    launch_client(reseau_info_t *info);
void    close_client(reseau_info_t *info);

        /* Requests specific */

#endif
