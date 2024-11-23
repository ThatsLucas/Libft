/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:02:15 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/19 16:13:58 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && *str != (unsigned char)c)
	{
		str++;
	}
	if (*str == (unsigned char)c)
	{
		return ((char *)str);
	}
	return (0);
}
