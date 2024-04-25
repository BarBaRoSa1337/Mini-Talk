/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:40:55 by achakour          #+#    #+#             */
/*   Updated: 2024/04/25 12:46:53 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    ft_send_signals(int pid, unsigned char c)
{
    static unsigned char   ch;
    static int             i;

    i = 7;
    while (i >= 0)
    {
        ch = c >> i;
        if ((ch & 0x01) == 1)
            kill(pid, SIGUSR1);
        else
            kill(pid, SIGUSR2);
        usleep(42);
        --i;
    }
}

int main(int ac, char **ar)
{
    int i;

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
