/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:26:06 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/27 15:57:35 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*occu;

	occu = (unsigned char *) s;
	while (n--)
	{
		if (*occu == (unsigned char) c)
			return (occu);
		occu++;
	}
	return (NULL);
}
