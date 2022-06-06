SHELL		= 	/bin/sh	#Should contain this line

.SUFFIXES	:	#reset la liste des suffixes
.SUFFIXES	: 	.c .o .h .a #explicite les suffixes pour cet environnement

NAME		= 	libftprintf.a

CC		= 	gcc

FLAGS		= 	-Wall -Wextra -Werror

SRC		= 	ft_printf.c\
		  	ft_conv.c\
		  	ft_spec_cs.c\
		  	ft_spec_diu.c\
		  	ft_spec_pxx.c\

OBJ		= 	$(SRC:.c=.o)

.PHONY 		: 	all clean fclean re

all 		: 	$(NAME)

$(NAME) 	: 	$(OBJ)
			ar rcs $(NAME) $(OBJ)

%.o 		: 	%.c
			gcc -c $(FLAGS) $< -o $@

clean 		:
			rm -f $(OBJ)

fclean 		: 	clean
			rm -f $(NAME)

re 		: 	fclean all
