/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:16:34 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/21 13:09:36 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*container;

	container = (t_list *)malloc(sizeof(t_list));
	if (!container)
		return (0);
	container->content = content;
	container->next = NULL;
	return (container);
}
