/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:40:17 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/22 17:27:50 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char					*s_cpy;
	long long unsigned int	i;

	i = 0;
	s_cpy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!s_cpy)
		return (NULL);
	while (s1[i] != '\0')
	{
		s_cpy[i] = s1[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
