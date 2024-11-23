/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:35:01 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 14:29:58 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countchar(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			while (s[i + 1] && s[i + 1] == c)
			{
				i++;
			}
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_freetab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static void	ft_allocate(char **tab, char const *s, char c, size_t i)
{
	size_t	slen;
	size_t	y;
	size_t	j;

	j = 0;
	y = 0;
	slen = ft_strlen(s);
	while (i < slen)
	{
		y = i;
		if (s[i] != c)
		{
			while (s[y] && s[y] != c)
				y++;
			tab[j] = ft_substr(s, i, y - i);
			if (!tab[j])
				return (ft_freetab(tab, j));
			j++;
			i = y;
		}
		i++;
	}
	tab[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**tab;

	count = ft_countchar(s, c);
	tab = (char **)malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	ft_allocate(tab, s, c, 0);
	if (!tab)
		return (NULL);
	return (tab);
}
