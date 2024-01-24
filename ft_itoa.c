/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:53:16 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/24 20:27:49 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_nblen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	size_t	nb;

	len = ft_nblen(n);
	nb = n;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		str[len-1] = (nb % 10 + '0');
		nb /= 10;
		len --;
	}
	return (str);
}
