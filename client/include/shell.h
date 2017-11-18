/*
** shell.h for client in /home/alexandre/Documents/git/fileTransfert/client/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:06:53 2017 alexandre Chamard-bois
** Last update Thu Nov 16 10:57:35 2017 alexandre Chamard-bois
*/

#ifndef SHELL_H_
# define SHELL_H_

extern int end;

int	exec_args(int ac, char **av);

int 	shell();
int	pars_cmd(char *str);
char	**get_args_cmd(char *line, int *nb_arg);

/* LIB */
char	*trim(char *str);
int	wordcmp(const char *str, const char *word);

#endif
