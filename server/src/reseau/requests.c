/*
** requests.c for fileTransfer in /home/guilhem/C/fileTransfer/server/src/reseau
**
** Made by Guilhem
** Login   <guilhem@epitech.net>
**
** Started on  Wed Nov 01 19:44:56 2017 Guilhem
** Last update Wed Nov 01 20:41:53 2017 Guilhem
*/

#include <stdio.h>
#include <stdlib.h>

#include "reseau.h"

void handle_request(reseau_info_t *info, char *buff)
{
        (void)info;
        printf("%s\n", buff);
}
