/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:04:54 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/24 15:24:00 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*maillon;

	maillon = (t_list *) malloc(sizeof(t_list));
	if (!maillon)
		return (NULL);
	maillon->next = NULL;
	maillon->content = content;
	return (maillon);
}
