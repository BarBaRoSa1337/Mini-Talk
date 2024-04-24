/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:39:19 by achakour          #+#    #+#             */
/*   Updated: 2024/04/24 09:56:21 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#ifndef PID_MAX
#define PID_MAX 4194304
#endif PID_MAX

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int         is_valid_pid(int pid);
ssize_t     ft_atoi(const char *str);

#endif