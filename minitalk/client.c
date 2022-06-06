/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:03:13 by jsangnak          #+#    #+#             */
/*   Updated: 2022/05/16 11:56:43 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

static int	ft_check_args(int argc)
{
	if (argc < 2)
	{
		write(1, "PID server is missing\n", 22);
		exit (1);
	}
	else if (argc < 3)
	{
		write(1, "No message to send\n", 19);
		exit (1);
	}
	else if (argc > 3)
	{
		write(1, "Too much arguments\n", 19);
		exit (1);
	}
	return (0);
}

static int	ft_sending_msg(int pid_server, char *message)
{
	int	octet;

	octet = 0;
	while (*message)
	{
		octet = 0;
		while (octet < 8)
		{
			if (((*message >> octet) & 1))
			{
				if ((kill(pid_server, SIGUSR2)) < 0)
					return (2);
			}
			else
			{
				if ((kill(pid_server, SIGUSR1)) < 0)
					return (2);
			}
			usleep(50);
			octet++;
		}
		message++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_check_args(argc);
	ft_sending_msg(ft_atoi(argv[1]), &argv[2][0]);
	return (0);
}
