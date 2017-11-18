/*
** reseau_header.h for client in /home/alexandre/Documents/git/fileTransfert/client/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Sat Nov 18 13:14:30 2017 alexandre Chamard-bois
** Last update Sat Nov 18 14:00:09 2017 alexandre Chamard-bois
*/

#ifndef RESEAU_HEADER_H_
#define RESEAU_HEADER_H_


#define	GET	"get",
#define	POST	"pst",
#define	MOVE	"mov",
#define	PUT	"put",
#define	DELETE	"del",
#define	INFOS	"inf",
#define	LS	"ls",
#define	PWD	"pwd",
#define	CD	"cd",
#define	FIND	"fnd"


/* get // infos // delete */
typedef struct	info_in_out {
	char	path[512];
}	info_in_out_t;

/* post // update */
typedef struct	info_out_out {
	char	path[512];
	int	nb_packets;
	char	md5[32];
}	info_out_out_t;

/* move */
typedef struct	info_mov_out {
	char	path[512];
	char	new_path[509]; // 512 - char cmd[3]
}	info_mov_out_t;

/* ls // pwd // cd // find */
typedef struct	info_arg_out {
	int	ac;
	char	**av;
}	info_arg_out_t;

/* infos header calls */
typedef union __attribute__((__packed__)) info_header_out {
	info_in_out_t	in;
	info_out_out_t	out;
	info_mov_out_t	mov;
	info_arg_out_t	arg;
}	info_header_out_t;

/* header call */
typedef struct			header_out {
	char			cmd[3];
	info_header_out_t	infos;
}	header_out_t;

/* header response */
typedef struct		header_in {
	int		response;
	int		nb_packets;
	char		md5[32];
	char		blank[984];
}	header_in_t;

#endif
