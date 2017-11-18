/*
** trim.c for fileTransfert in /home/alexandre/Documents/git/fileTransfert/server/src/lib
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 15:03:54 2017 alexandre Chamard-bois
** Last update Tue Nov 14 22:23:44 2017 alexandre Chamard-bois
*/

#include <sys/types.h>
#include <ctype.h>
#include <string.h>

char *trim(char *str)
{
	size_t	i = 0;
	size_t	len = strlen(str);

	while (str[i] && isblank(str[i])) {
		i++;
	}
	while (len > 0 && isblank(str[--len]));
	if (!len && isblank(*str)) {
		*str = 0;
		return (str);
	}
	for (unsigned int j = 0; j < len - i + 1; j++) {
		str[j] = str[i + j];
	}
	str[len - i + 1] = 0;
	for (i = 0; str[i] && str[i] != '#'; i++);
	str[i] = 0;
	return (str);
}
