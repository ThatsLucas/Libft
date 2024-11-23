/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:41:48 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/19 16:15:38 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (length > 0)
	{
		if (*temp1 != *temp2)
			return ((unsigned char)*temp1 - (unsigned char)*temp2);
		if ((unsigned char)*temp1 == '\0')
			return (0);
		temp1++;
		temp2++;
		length--;
	}
	return (0);
}
