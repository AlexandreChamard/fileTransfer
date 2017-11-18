/*
** arg_cmd.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/shell
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:47:15 2017 alexandre Chamard-bois
** Last update Thu Nov 16 19:26:44 2017 alexandre Chamard-bois
*/

#include <string.h>
#include <stdlib.h>
#include "macro.h"

int	nb_word(char *str)
{
	int in_word = !ISBLANK(*str);
	int nb_word = in_word;

	while (*str) {
		if (!ISBLANK(*str) && !in_word) {
			nb_word++;
		}
		if (ISBLANK(*str)) {
			in_word = 0;
			*str = 0;
		} else {
			in_word = 1;
		}
		str++;
	}
	return (nb_word);
}

char **create_tab(char **tab, char *line, int nb_args)
{
	for (int i = 0; i < nb_args; i++) {
		while (!*line) {
			line++;
		}
		tab[i] = line;
		while (*line) {
			line++;
		}
	}
	return (tab);
}

char **get_args_cmd(char *line, int *nb_args)
{
	size_t len = strlen(line);
	size_t size_ptrs;
	void *ptr;

	*nb_args = nb_word(line);
	size_ptrs = sizeof(char *) * (*nb_args + 1);
	ptr = malloc(size_ptrs + len + 1);
	if (ptr) {
		memset(ptr, 0, size_ptrs + len + 1);
		memcpy(ptr + size_ptrs, line, len);
		return (create_tab(ptr, ptr + size_ptrs, *nb_args));
	}
	return (NULL);
}
