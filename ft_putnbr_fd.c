/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:47:43 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/10 21:23:50 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -214783648)
		{
			ft_putstr_fd("-214783648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n, fd);
}
