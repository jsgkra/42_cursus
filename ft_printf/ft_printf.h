/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:18:51 by jsangnak          #+#    #+#             */
/*   Updated: 2022/01/10 16:02:09 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
void	ft_conv(va_list arg, const char *fmt, int *count);
void	ft_putchar_count(char c, int *count);
void	ft_spec_s(const char *s, int *count);
void	ft_spec_p(long unsigned n, int *count);
void	ft_spec_d_i(int n, int *count);
void	ft_spec_u(unsigned int n, int *count);
void	ft_spec_xx(unsigned int n, const char charx, int *count);
#endif
