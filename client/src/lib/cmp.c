/*
** cmp.c for lib in /home/alexandre/Documents/git/fileTransfert/client/src/lib
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:34:01 2017 alexandre Chamard-bois
** Last update Thu Nov 16 19:20:24 2017 alexandre Chamard-bois
*/

#include <ctype.h>
#include "macro.h"

int wordcmp(const char *str, const char *word)
{
	while (*word && *str == *word) {
		str++;
		word++;
	}
	return (!*word && (!*str || ISBLANK(*str)));
}
