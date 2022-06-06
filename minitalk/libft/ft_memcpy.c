/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:47:15 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/23 17:14:57 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cast_dst;
	unsigned char	*cast_src;

	if (!src && !dst)
		return (NULL);
	cast_dst = (unsigned char *) dst;
	cast_src = (unsigned char *) src;
	while (n-- > 0)
		*(cast_dst++) = *(cast_src++);
	return (dst);
}
