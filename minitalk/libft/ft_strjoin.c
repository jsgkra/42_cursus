/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:23:08 by jsangnak          #+#    #+#             */
/*   Updated: 2022/05/13 09:55:36 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_free(char *s)
{
	if (s)
	{
		free(s);
		s = NULL;
	}
}

char	*ft_strjoin(char *s1, char *s2)
{
	char					*s_joined;
	long long unsigned int	i;
	long long unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s_joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_joined)
		return (NULL);
	while (s1[i] != '\0')
	{
		s_joined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s_joined[i] = s2[j];
		i++;
		j++;
	}
	s_joined[i] = '\0';
	ft_free(s1);
	return (s_joined);
}
