/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:47:43 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/12 20:27:27 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n *= -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
}
// void	ft_putnbr_fd(int n, int fd)
// {
// 	long	nb;

// 	nb = n;
// 	if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 		ft_putnbr_fd(nb / 10, fd);
// 	else if (nb > 10)
// 		ft_putchar_fd((nb / 10) + '0', fd);
// 	ft_putchar_fd((nb % 10) + '0', fd);
// }