/*
** macro.h for fileTransfer in /home/guilhem/C/fileTransfer/client/include
**
** Made by Guilhem
** Login   <guilhem@epitech.net>
**
** Started on  Fri Nov 03 13:44:55 2017 Guilhem
** Last update Fri Nov 03 14:22:12 2017 Guilhem
*/


#ifndef CLIENT_MACRO_H_
# define CLIENT_MACRO_H_

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

// Address loopback on DEFAULT_PORT
#ifndef DEFAULT_ADDR
# define DEFAULT_ADDR   "127.0.0.1"
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

#endif
