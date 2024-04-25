/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:58:57 by achakour          #+#    #+#             */
/*   Updated: 2024/04/25 12:47:03 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    receive_signals(int signal)
{
    static unsigned char    ch;
    static int              i;
    int                     x;

    i = 0;
    if (signal == SIGUSR1)
        x = 1;
    else
        x = 0;
    ch = ch << 1 | x;
    ++i;
    if (i == 8)
    {
        printf ("%c", ch);
        i = 0;
    }
}

int main()
{
    ft_printf("Welcome to Barbarosa server\n");
    ft_printf("My pid is %d\n", getpid());
    while (1)
    {
        signal(SIGUSR1, receive_signals);
        signal(SIGUSR2, receive_signals);
    }
    return (0);
}