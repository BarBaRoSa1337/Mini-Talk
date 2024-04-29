# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achakour <achakour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 12:48:40 by achakour          #+#    #+#              #
#    Updated: 2024/04/29 11:49:41 by achakour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_S= server.c ft_printf.c
CLIENT_S= client.c ft_printf.c

SERVER_O=$(SERVER_S:.c=.o)
CLIENT_O=$(CLIENT_S:.c=.o)

CFLAGS= -Wall -Wextra -Werror
SERVER = server
CLIENT = client
RM = rm -rf
CC = cc

all: $(SERVER) $(CLIENT)

$(SERVER): $(SERVER_O)
	$(CC) $(CFLAGS) $(SERVER_O) -o server

$(CLIENT): $(CLIENT_O)
	$(CC) $(CFLAGS) $(CLIENT_O) -o client

clean:
	$(RM) $(SERVER_O) $(CLIENT_O)

fclean: clean
	$(RM) $(SERVER) $(CLIENT)

re: fclean all