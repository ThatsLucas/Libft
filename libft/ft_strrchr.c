/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:11:56 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/22 11:36:15 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pos;
	long	i;

	i = ft_strlen(str);
	pos = 0;
	if (c == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
