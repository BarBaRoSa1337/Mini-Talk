/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:58:57 by achakour          #+#    #+#             */
/*   Updated: 2024/04/24 12:39:23 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    receive_signals(void)
{
    static unsigned char    ch;
    unsigned char           c;
    static int              i;

    i = 0;
    while (i < 8)
    {
        ch =| ();
    }
    printf ("%c", c);
}

int main()
{
    printf("the pid of the server is : %d\n", getpid());
    receive_signals();
    while (1)
    {
    }    
}