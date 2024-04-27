# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achakour <achakour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 12:48:40 by achakour          #+#    #+#              #
#    Updated: 2024/04/27 12:08:34 by achakour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_S= minitalk_utils.c server.c ft_printf.c
CLIENT_S= ft_printf.c minitalk_utils.c client.c

SERVER_O =$(SERVER_S=.c.o)
CLIENT_O =$(CLIENT_S=.s.o)
CFLAGS= -Wall -Wextra -Werror
RM = rm -rf
CC = cc

all: $(SERVER) $(CLIENT)

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

$(SERVER): $(SERVER_O)
	$(CC) $(CFLAGS) $(SERVER_O) -o server

$(CLIENT): $(CLIENT_O)
	$(CC) $(CFLAGS) $(CLIENT_O) -o client

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(SERVER) $(CLIENT)

re: fclean all