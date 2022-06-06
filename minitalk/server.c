/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:03:07 by jsangnak          #+#    #+#             */
/*   Updated: 2022/05/16 11:35:36 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

static void	ft_screen_pid(void)
{
	char	*pid;

	pid = ft_itoa(getpid());
	write(1, "PID server : ", 13);
	write(1, pid, sizeof(pid));
	write(1, "\n", 1);
	return ;
}

void	ft_write_char(int bit)
{
	static char	n_bits = 0;
	static char	c = 0;

	c += ((bit & 1) << n_bits);
	n_bits++;
	if (n_bits == 8)
	{
		write(1, &c, 1);
		c = 0;
		n_bits = 0;
	}
	return ;
}

void	handle_signal(int signum)
{
	if (signum == SIGUSR1)
		ft_write_char(0);
	else if (signum == SIGUSR2)
		ft_write_char(1);
	return ;
}

int	main(void)
{
	ft_screen_pid();
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (0);
}
