
/*
** main.c for Server in /home/alexandre/Documents/git/fileTransfert/server/src
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 14:52:24 2017 alexandre Chamard-bois
** Last update Wed Nov 01 14:52:40 2017 alexandre Chamard-bois
*/

/* Usefull defines */

#ifndef EXIT_S
# define EXIT_S         0
#endif

#ifndef EXIT_F
# define EXIT_F         42
#endif

#ifndef STD_F
# define STD_F          -1
#endif

#ifndef TRY
# define TRY(x, y)      (x == y ? perror(NULL), exit(EXIT_F) : 0)
#endif

#ifndef DEFAULT_PORT
# define DEFAULT_PORT   1234       // Should only use port number >=1024, others may be in use
#endif

#ifndef BUFF_SIZE
# define BUFF_SIZE      1024       // 1Ko for now, to discuss later
#endif

#ifndef TIMEOUT
# define TIMEOUT        -1         // timeout for server, -1 for disabling it
#endif

/* Usefull structs */

typedef struct                  s_server_info {
        struct sockaddr_in      addr;
        socklen_t               addrlen;
        int                     fd;
        int                     sockfd;
        int                     msg_len;
        char                    msg_buff[BUFF_SIZE];
}                               t_server_info;

/* Declarations of functions */

void    launch_server(t_server_info *info);
void    close_server(t_server_info *info);
