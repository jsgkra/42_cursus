/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsangnak <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:32:29 by jsangnak          #+#    #+#             */
/*   Updated: 2021/11/22 17:30:12 by jsangnak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_words(const char *s, char c)
{	
	int	i;
	int	word;

	word = 0;
	i = 0;
	if (c == '\0')
		return (1);
	while (s[i])
	{	
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (word);
		word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

static void	ft_w_copy(char **tab, const char *s, char c)
{	
	int	i;
	int	j;
	int	debut;
	int	len;

	i = 0;
	j = 0;
	while (s[i])
	{	
		while (s[i] && s[i] == c)
			i++;
		debut = i;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		len = i - debut;
		tab[j] = malloc((len + 1) * sizeof(char));
		if (!tab[j])
			free (tab[j]);
		ft_strlcpy(tab[j], s + debut, len + 1);
		j++;
	}
	tab[j] = NULL;
	return ;
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		ac;

	if (!s)
		return (NULL);
	ac = ft_words(s, c);
	tab = malloc((ac + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	ft_w_copy(tab, s, c);
	tab[ac] = NULL;
	return (tab);
}
/*
int main(void)
{
	char **p;
	int i;
	
	i = 0;
	p = ft_split("000salut000coucou00001234000", '0' );
	if (!p)
		return (0);
	while (*p)
	{
		printf("%s\n", *p);
		p++;
	}
	free(*p);
	return (0);
}*/
