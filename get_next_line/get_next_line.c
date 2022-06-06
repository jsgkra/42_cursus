/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:42:58 by jsangnak          #+#    #+#             */
/*   Updated: 2022/03/22 10:02:01 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*line;
	char	cara;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 256 || (read(fd, 0, 0) < 0))
		return (NULL);
	if (read(fd, &cara, 1) == 0)
		return (NULL);
	line = (char *) malloc(sizeof(char) * 1);
	if (!line)
		return (NULL);
	line[0] = '\0';
	line = ft_join(line, cara);
	if (cara == '\n')
		return (line);
	while (read(fd, &cara, 1) != 0)
	{
		if (cara == '\0')
			return (NULL);
		line = ft_join(line, cara);
		if (cara == '\n')
			return (line);
	}
	if (line)
		return (line);
	return (NULL);
}
