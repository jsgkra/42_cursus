/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:09:04 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/27 15:55:58 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memzone;

	memzone = malloc(count * size);
	if (!memzone)
		return (NULL);
	ft_bzero(memzone, (count * size));
	return (memzone);
}
