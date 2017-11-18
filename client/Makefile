##
## Makefile for Client in /home/alexandre/Documents/tek1/mouliPushswap
##
## Made by alexandre Chamard-bois
## Login   <alexandre@epitech.net>
##
## Started on  Wed Oct 18 22:50:38 2017 alexandre Chamard-bois
## Last update Wed Oct 18 22:50:38 2017 alexandre Chamard-bois
##

CC		=	gcc

CFLAGS		=	-W -Wall -Wextra -Werror -g
CFLAGS		+=	-I./include

SRC		=	src/main.c

SRC		+=	src/reseau/launch.c			\

SRC		+=	src/console/shell/shell.c		\
			src/console/shell/pars_cmd.c		\
			src/console/shell/args_cmd.c		\

SRC		+=	src/console/cmds/cmd_exit.c		\
			src/console/cmds/cmd_debug.c		\
			src/console/cmds/cmd_shell_ls.c		\
			src/console/cmds/cmd_shell_cd.c		\

SRC		+=	src/lib/trim.c				\
			src/lib/cmp.c				\


OBJ		=	$(SRC:.c=.o)

NAME		=	clientFT

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean		:
			rm -f $(OBJ)

fclean		:	clean
			rm -f $(NAME)

re		:	fclean all
