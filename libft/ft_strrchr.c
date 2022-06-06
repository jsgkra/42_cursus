/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:31:09 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/24 16:19:48 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			length;
	const char	*ptr;

	length = (int) ft_strlen(s);
	ptr = &s[length];
	while (c > 127)
		c = c % 128;
	if (!s && !c)
		return (0);
	if (c == '\0' && *ptr == '\0')
		return ((char *) ptr);
	while (length > 0 && s[length] != c)
		length--;
	ptr = &s[length];
	if (*ptr != c)
		return (0);
	return ((char *) ptr);
}
