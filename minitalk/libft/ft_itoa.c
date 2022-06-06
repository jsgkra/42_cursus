/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:32:39 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/22 17:30:44 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	intlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	isneg(int n)
{
	int	is_neg;

	is_neg = 1;
	if (n < 0)
		is_neg = -1;
	return (is_neg);
}

static char	*conv_intalph(unsigned int conv, char *s, size_t n)
{	
	while (n--)
	{
		s[n] = conv % 10 + '0';
		conv = conv / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	conv;
	int				len_int;
	int				is_neg;
	char			*s_int;

	is_neg = isneg(n);
	len_int = intlen(n);
	s_int = (char *) malloc(sizeof(char) * (len_int + 1));
	if (!s_int)
		return (NULL);
	s_int[len_int] = '\0';
	if (is_neg < 0)
		n = -n;
	if (n == -2147483648)
	{
		free(s_int);
		return (ft_strdup("-2147483648"));
	}
	conv = n;
	conv_intalph(conv, s_int, len_int);
	if (is_neg < 0)
		s_int[0] = '-';
	return (s_int);
}
