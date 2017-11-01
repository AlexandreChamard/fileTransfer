/*
** macro.h for Server in /home/alexandre/Documents/git/fileTransfert/server/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 17:17:13 2017 alexandre Chamard-bois
** Last update Wed Nov 01 20:36:39 2017 Guilhem
*/

#ifndef SERVER_MACRO_H_
# define SERVER_MACRO_H_

#ifndef EXIT_S
# define EXIT_S         0
#endif

#ifndef EXIT_F
# define EXIT_F         42
#endif

// Standard error number
#ifndef STD_ERR
# define STD_ERR        -1
#endif

#ifndef TRUE
# define TRUE           1
#endif

#ifndef FALSE
# define FALSE          0
#endif

#ifndef HANDLE
# define HANDLE(...)    perror(NULL), ##__VA_ARGS__, exit(EXIT_F)
#endif

// First argument for func to TRY
// Second argument for error to verify
// Third argument for func to handle error
#ifndef TRY
# define TRY(func, err, ...)    (func == err ? HANDLE(__VA_ARGS__) : 0)
#endif

// Should only use port number >=1024, others may be in use
#ifndef DEFAULT_PORT
# define DEFAULT_PORT   1234
#endif

// 1Ko for now, to discuss later
#ifndef BUFF_SIZE
# define BUFF_SIZE      1024
#endif

// timeout for server, -1 for disabling it
#ifndef TIMEOUT
# define TIMEOUT        -1
#endif

#ifndef MAX_CLIENTS
# define MAX_CLIENTS    64
#endif

#endif
