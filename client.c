/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:40:55 by achakour          #+#    #+#             */
/*   Updated: 2024/04/29 11:57:35 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

ssize_t	ft_atoi(const char *str)
{
	size_t	sign;
	ssize_t	num;
	int		i;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n'
		|| str[i] == ' ' || str[i] == '\v')
	{
		++i;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		++i;
	}
	return (num * sign);
}

int	is_valid_pid(int pid)
{
	if (pid < 0 || pid > PID_MAX)
		return (0);
	return (1);
}

void	ft_send_signals(int pid, unsigned char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 0x01)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(137);
		--i;
	}
}

int	main(int ac, char **ar)
{
	int	i;

	if (ac == 3)
	{
		i = 0;
		if (!is_valid_pid(ft_atoi(ar[1])))
			return (1);
		while (ar[2][i])
		{
			ft_send_signals(ft_atoi(ar[1]), (unsigned char)ar[2][i]);
			++i;
		}
	}
	else
	{
		ft_printf("Wrong Formart : ./client [pid] [str to send]");
		return (1);
	}
	return (0);
}
