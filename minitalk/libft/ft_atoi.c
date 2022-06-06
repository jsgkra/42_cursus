/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:44:54 by jsangnak          #+#    #+#             */
/*   Updated: 2022/05/13 09:51:33 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	count;

	i = 0;
	minus = 1;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == '+')
	{
		if (str[i] == 45)
			minus = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		count *= 10;
		count += str[i] - 48;
		i++;
	}
	return (count * minus);
}
