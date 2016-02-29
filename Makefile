##
## Makefile for Makefile in /home/costa_b/rendu/CPE_2013_BSQ
## 
## Made by Kevin Costa
## Login   <costa_b@epitech.net>
## 
## Started on  Fri Dec  6 18:44:40 2013 Kevin Costa
## Last update Fri Feb 14 19:53:23 2014 Kevin Costa
##

CC	=		gcc

NAME	=		allum1

CFLAGS +=		-Wall -Wextra
CFLAGS	+=		-pedantic -ansi

LDFLAGS =               -lmlx -lXext -lX11

SRC	=		my_lib.c		\
			my_lib2.c		\
			my_printf1.c		\
			allum.c			\
			get_next_line.c		\
			my_init.c		\
			my_check.c		\
			show_allum.c		\
			draw_allum.c		\
			game.c			\
			condition.c		\
			show_boyard.c		\
			game42.c		\
			reduc.c

OBJ	=		$(SRC:.c=.o)

all :			$(NAME)

$(NAME) :		$(OBJ)
			$(CC)  $(OBJ) -o $(NAME) $(LDFLAGS)

clean : 
			rm -rf $(OBJ)

fclean : 		clean
			rm -rf $(NAME)

re : 			fclean all
