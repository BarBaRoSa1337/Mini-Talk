/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:58:57 by achakour          #+#    #+#             */
/*   Updated: 2024/04/27 13:33:23 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receive_signals(int signal)
{
	static unsigned char	ch;
	static int				i;

	ch = ch << 1;
	if (signal == SIGUSR1)
		ch |= 1;
	++i;
	if (i == 8)
	{
		write(1, &ch, 1);
		i = 0;
		ch = 0;
	}
}

int	main(void)
{
	ft_printf("Welcome to Barbarosa server\n");
	ft_printf("My pid is %d\n", getpid());
	while (1)
	{
		signal(SIGUSR2, receive_signals);
		signal(SIGUSR1, receive_signals);
	}
	return (0);
}
