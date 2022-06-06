# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 11:02:57 by jsangnak          #+#    #+#              #
#    Updated: 2022/05/16 11:27:01 by jsangnak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	server client
SERVER				= 	server
CLIENT				=	client

SERVER_SRC			=	server.c
CLIENT_SRC			=	client.c

SERVER_OBJ			=	server.o
CLIENT_OBJ			=	client.o

LIBFT_DIR			=	libft
LIBFT				=	$(LIBFT_DIR)/libft.a

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror -g
RM					=	rm -rf

all					:	$(NAME)

$(SERVER)			:	$(SERVER_OBJ) $(FT_PRINTF) $(LIBFT)
						@$(CC) $(CFLAGS)  $(SERVER_SRC) -o $(SERVER) $(LIBFT)
$(CLIENT)			:	$(CLIENT_OBJ)
						@$(CC) $(CFLAGS)  $(CLIENT_SRC) -o $(CLIENT) $(LIBFT)

$(LIBFT)			:
						$(MAKE) -sC $(LIBFT_DIR)

clean				:
						@$(RM) $(SERVER_OBJ) $(CLIENT_OBJ)
						@make -C $(LIBFT_DIR) clean

fclean				:	clean
						@$(RM) $(SERVER) $(CLIENT)
						@make -C $(LIBFT_DIR) fclean

bonus				:	all

re					:	fclean all

.PHONY				:	all clean fclean re bonus
