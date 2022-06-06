# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 10:04:53 by jsangnak          #+#    #+#              #
#    Updated: 2021/11/27 15:36:09 by jsangnak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SHELL = /bin/sh		#Should contain this line

.SUFFIXES:		#reset la liste des suffixes
.SUFFIXES: .c .o .h .a	#explicite les suffixes pour cet environnement

NAME			= libft.a

CC			= gcc

FLAGS			= -Wall -Wextra -Werror 

INCLUDES 		= ./libft.h

SRC			= ft_isalpha.c\
			  ft_isdigit.c\
			  ft_isalnum.c\
			  ft_isascii.c\
			  ft_isprint.c\
			  ft_strlen.c\
			  ft_memset.c\
			  ft_bzero.c\
			  ft_memcpy.c\
			  ft_memmove.c\
			  ft_strlcpy.c\
			  ft_strlcat.c\
			  ft_toupper.c\
			  ft_tolower.c\
			  ft_strchr.c\
			  ft_strrchr.c\
			  ft_strncmp.c\
			  ft_memchr.c\
			  ft_memcmp.c\
			  ft_strnstr.c\
			  ft_atoi.c\
			  ft_calloc.c\
			  ft_strdup.c\
			  ft_substr.c\
			  ft_strmapi.c\
			  ft_striteri.c\
			  ft_putchar_fd.c\
			  ft_putstr_fd.c\
			  ft_putendl_fd.c\
			  ft_putnbr_fd.c\
			  ft_strjoin.c\
			  ft_strtrim.c\
			  ft_itoa.c\
			  ft_split.c\

BONUS_SRC		= ft_lstnew.c\
			  ft_lstadd_front.c\
			  ft_lstsize.c\
			  ft_lstlast.c\
			  ft_lstadd_back.c\
			  ft_lstdelone.c\
			  ft_lstclear.c\
			  ft_lstiter.c\
			  ft_lstmap.c\

OBJ			= $(SRC:.c=.o)
BONUS_OBJ 		= $(BONUS_SRC:.c=.o)

.PHONY : 		all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
