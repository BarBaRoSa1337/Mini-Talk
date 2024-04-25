# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achakour <achakour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 12:48:40 by achakour          #+#    #+#              #
#    Updated: 2024/04/25 12:53:26 by achakour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_S= minitalk_utils.c server.c ft_printf.c
CLIENT_S= ft_printf.c minitalk_utils.c client.c

SERVER_O =(SERVER_S=.c.o)
CLIENT_O =