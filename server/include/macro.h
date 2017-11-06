/*
** macro.h for Server in /home/alexandre/Documents/git/fileTransfert/server/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 17:17:13 2017 alexandre Chamard-bois
** Last update Mon Nov 06 12:51:31 2017 alexandre Chamard-bois
*/

#ifndef SERVER_MACRO_H_
# define SERVER_MACRO_H_

# ifndef EXIT_S
#  define EXIT_S         0
# endif

# ifndef EXIT_F
#  define EXIT_F         42
# endif

# ifndef STD_F
#  define STD_F          -1
# endif

# ifndef TRY
#  define TRY(x, y)      (x == y ? perror(NULL), exit(EXIT_F) : 0)
# endif

# ifndef DEFAULT_PORT
#  define DEFAULT_PORT   1234       // Should only use port number >=1024, others may be in use
# endif

# ifndef BUFF_SIZE
#  define BUFF_SIZE      1024       // 1Ko for now, to discuss later
# endif

# ifndef TIMEOUT
#  define TIMEOUT        -1         // timeout for server, -1 for disabling it
# endif

# ifndef FILENAME_MAX
#  define FILENAME_MAX	256
# endif

# ifndef PATH_MAX
#  define PATH_MAX	4096
# endif

#endif
