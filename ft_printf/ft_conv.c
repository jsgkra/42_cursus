/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_option.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:40:43 by jsangnak          #+#    #+#             */
/*   Updated: 2022/01/10 16:11:46 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_conv(va_list arg, const char *fmt, int *count)
{
	if (*(fmt + 1) == 'c')
		ft_putchar_count(va_arg(arg, int), count);
	else if (*(fmt + 1) == 's')
		ft_spec_s(va_arg(arg, const char *), count);
	else if (*(fmt + 1) == 'p')
	{
		ft_spec_s("0x", count);
		ft_spec_p(va_arg(arg, long unsigned), count);
	}
	else if (*(fmt + 1) == 'd' || *(fmt + 1) == 'i')
		ft_spec_d_i(va_arg(arg, int), count);
	else if (*(fmt + 1) == 'u')
		ft_spec_u(va_arg(arg, unsigned int), count);
	else if (*(fmt + 1) == 'x' || *(fmt + 1) == 'X')
		ft_spec_xx(va_arg(arg, unsigned int), *(fmt + 1), count);
	else if (*(fmt + 1) == '%')
		ft_putchar_count('%', count);
	return ;
}
