/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:51:17 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/05 17:15:10 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result *= 10;
		result += nptr[i++] - 48;
	}
	result *= sign;
	return (result);
}
/* #include <stdio.h>

int main()
{
	const char *coucou = "-523";
	const char *coucou2 = "-0";
	const char *coucou3 = "-2147483648";
	const char *coucou4 = "5";
	const char *coucou5 = "-8";
	printf("%d\n", ft_atoi(coucou));
	printf("%d\n", ft_atoi(coucou2));
	printf("%d\n", ft_atoi(coucou3));
	printf("%d\n", ft_atoi(coucou4));
	printf("%d\n", ft_atoi(coucou5));
} */
