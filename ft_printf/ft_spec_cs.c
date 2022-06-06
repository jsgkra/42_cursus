/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:25:17 by jsangnak          #+#    #+#             */
/*   Updated: 2022/01/10 16:14:00 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar_count(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
	return ;
}

void	ft_spec_s(const char *s, int *count)
{
	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	while (*s)
	{
		ft_putchar_count(*s, count);
		s++;
	}
	return ;
}
