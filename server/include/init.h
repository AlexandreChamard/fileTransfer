/*
** init.c for Server in /home/alexandre/Documents/git/fileTransfert/server/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 15:47:04 2017 alexandre Chamard-bois
** Last update Wed Nov 01 16:44:30 2017 alexandre Chamard-bois
*/

#ifndef SERVER_INIT_H_
# define SERVER_INIT_H_

#include "config.h"

typedef int (*func_valid_t)(void *data, char *buff);

int init_server(server_config_t *config);

#endif
