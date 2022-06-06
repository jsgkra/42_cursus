/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:28:14 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/24 15:47:48 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	haystack_len;
	size_t	size;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (haystack_len < needle_len || len < needle_len)
		return (0);
	if (haystack_len > len)
		size = len;
	else
		size = haystack_len;
	while (size-- >= needle_len)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
