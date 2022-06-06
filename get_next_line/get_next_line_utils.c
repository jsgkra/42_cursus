/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:55:17 by jsangnak          #+#    #+#             */
/*   Updated: 2022/03/22 10:00:46 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_join(char *line, char cara)
{
	char	*joined;
	int		i;

	joined = (char *) malloc(sizeof(char) * (ft_strlen(line) + 2));
	if (!joined)
		return (NULL);
	i = 0;
	while (line[i])
	{
		joined[i] = line[i];
		i++;
	}
	joined[i] = cara;
	joined[i + 1] = '\0';
	if (line)
		free(line);
	return (joined);
}
