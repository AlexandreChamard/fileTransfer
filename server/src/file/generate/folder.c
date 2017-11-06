/*
** folder.c for SERVER in /home/alexandre/Documents/git/fileTransfert/server/src/file/generate
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Mon Nov 06 12:46:10 2017 alexandre Chamard-bois
** Last update Mon Nov 06 16:13:12 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int generate_folder(char *path)
{
	struct stat st;

	if (stat(path, &st) == -1) {
		if (mkdir(path, 0700) == -1) {
			for (int i = strlen(path); --i; ) {
				if (path[i] == '/') {
					path[i] = 0;
					if (generate_folder(path) == -1) {
						return (-1);
					}
					path[i] = '/';
					return (generate_folder(path));
				}
			}
			return (-1);
		}
	}
	return (0);
}
