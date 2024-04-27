#!/bin/bash

gcc server.c minitalk_utils.c ft_printf.c -o server
gcc client.c minitalk_utils.c ft_printf.c -o client
