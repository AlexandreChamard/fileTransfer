/*
** config.h for Server in /home/alexandre/Documents/git/fileTransfert/server/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:55:26 2017 alexandre Chamard-bois
** Last update Wed Nov 01 17:29:31 2017 alexandre Chamard-bois
*/

#ifndef SERVER_CONFIG_H_
# define SERVER_CONFIG_H_

#include "reseau.h"

# define CONFIG_FILE_NAME	".config"
# define CONFIG_FILE_RIGHT	0664

typedef struct server_config {
	reseau_info_t reseau;
	char	home[128];
	char	data[128];
	char	references[128];
	long	max_space; // Ko
}	server_config_t;

int open_config_file(server_config_t *config);
void print_config(server_config_t *config);

#endif
