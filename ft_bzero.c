/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:45:47 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/19 16:09:41 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t count)
{
	unsigned char	*temp;
	size_t			i;

	temp = pointer;
	i = 0;
	while (i++ < count)
		*temp++ = '\0';
}
