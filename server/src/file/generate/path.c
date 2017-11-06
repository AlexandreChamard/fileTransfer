/*
** path.c for SERVER in /home/alexandre/Documents/git/fileTransfert/server/src/file/generate
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Mon Nov 06 12:39:03 2017 alexandre Chamard-bois
** Last update Mon Nov 06 23:10:58 2017 alexandre Chamard-bois
*/

#include <stdarg.h>
#include <string.h>

char *generate_path(char *path, int nb, ...)
{
	va_list ap;
	size_t len = 0;
	char *arg;

	va_start(ap, nb);
	for (int i = 0; i < nb; i++) {
		arg = va_arg(ap, char*);
		strcpy(path + len, arg);
		len += strlen(arg);
	}
	va_end(ap);
	return (0);
}
