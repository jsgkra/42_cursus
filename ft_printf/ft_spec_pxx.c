/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_pxx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:05:03 by jsangnak          #+#    #+#             */
/*   Updated: 2022/01/10 16:21:23 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_spec_p(long unsigned n, int *count)
{
	const char	*base1;
	int			rang_base;

	base1 = "0123456789abcdef";
	if (n > 15)
		ft_spec_p(n / 16, count);
	rang_base = (n % 16);
	ft_putchar_count(base1[rang_base], count);
	return ;
}

void	ft_spec_xx(unsigned int n, const char charx, int *count)
{
	const char	*base1;
	const char	*base2;
	int			rang_base;

	base1 = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	if (n > 15)
		ft_spec_xx(n / 16, charx, count);
	rang_base = (n % 16);
	if (charx == 'x')
		ft_putchar_count(base1[rang_base], count);
	if (charx == 'X')
		ft_putchar_count(base2[rang_base], count);
	return ;
}
