/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:58:14 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/22 11:39:58 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	a;

	if (fd < 0)
		return ;
	i = n;
	if (i < 0)
	{
		i *= -1;
		write(fd, "-", 1);
	}
	if (i <= 9)
	{
		a = i + '0';
		write(fd, &a, 1);
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}
