/*
** init.c for Server in /home/alexandre/Documents/git/fileTransfert/server/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 15:47:04 2017 alexandre Chamard-bois
** Last update Sun Nov 05 11:48:25 2017 alexandre Chamard-bois
*/

#ifndef SERVER_INIT_H_
# define SERVER_INIT_H_

#include "config.h"

enum g_info {
	HOME = 0,
	REF,
	DATA,
	SIZE,
};

typedef int (*func_valid_t)(void *data, char *buff, size_t size);
typedef int (*func_default_val_t)(void *data);

int valid_home(void *data, char *buff, size_t size);
int set_default_home(void *data);

int valid_data(void *data, char *buff, size_t size);
int set_default_data(void *data);

int valid_references(void *data, char *buff, size_t size);
int set_default_references(void *data);

int valid_size(void *data, char *buff, size_t size);
int set_default_size(void *data);

typedef struct	pars_info {
	char			*prompt;
	func_valid_t		valid;
	func_default_val_t	def_val;
}	pars_info_t;

int init_server(server_config_t *config);

#endif
