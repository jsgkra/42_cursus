/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:46:27 by jsangnak          #+#    #+#             */
/*   Updated: 2022/01/10 16:17:02 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_spec_d_i(int n, int *count)
{
	char	conv_char;

	if (n == -2147483648)
	{
		ft_spec_s("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_count('-', count);
	}
	if (n > 9)
		ft_spec_d_i(n / 10, count);
	conv_char = (n % 10) + '0';
	ft_putchar_count(conv_char, count);
	return ;
}

void	ft_spec_u(unsigned int n, int *count)
{
	char	conv_char;

	if (n > 9)
		ft_spec_u(n / 10, count);
	conv_char = (n % 10) + '0';
	ft_putchar_count(conv_char, count);
	return ;
}
