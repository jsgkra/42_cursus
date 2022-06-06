/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:17:45 by jsangnak          #+#    #+#             */
/*   Updated: 2022/01/10 15:18:35 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	arg;
	int		return_count;

	return_count = 0;
	va_start(arg, fmt);
	if (!fmt)
		return (0);
	while (*fmt)
	{
		if (*fmt != '%')
		{
			ft_putchar_count(*fmt, &return_count);
		}
		else if (*fmt == '%')
		{
			ft_conv(arg, fmt, &return_count);
			fmt++;
		}
		fmt++;
	}
	va_end(arg);
	return (return_count);
}
