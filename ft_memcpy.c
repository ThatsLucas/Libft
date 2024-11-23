/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:12:21 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/22 11:41:02 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	if (!destination && !source)
		return (NULL);
	dest = destination;
	src = source;
	i = -1;
	while (++i < size)
		dest[i] = src[i];
	return (destination);
}
