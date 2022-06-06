/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:32:22 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/25 17:07:29 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_fonc;

	i = 0;
	if (!s)
		return (NULL);
	s_fonc = (char *) malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!s_fonc)
		return (NULL);
	while (s[i])
	{
		s_fonc[i] = f(i, s[i]);
		i++;
	}
	s_fonc[i] = '\0';
	return (s_fonc);
}
