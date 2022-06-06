/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:32:18 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/22 17:29:16 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s_trim;
	size_t	len_s;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_s = ft_strlen(s1);
	while (len_s > 0 && ft_strchr(set, s1[len_s - 1]))
		len_s--;
	s_trim = malloc(sizeof(char) * (len_s + 1));
	if (!s_trim)
		return (NULL);
	ft_strlcpy(s_trim, s1, len_s + 1);
	return (s_trim);
}
