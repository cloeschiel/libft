/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:33:53 by cschiel           #+#    #+#             */
/*   Updated: 2023/10/20 19:19:48 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *c)
{
	int	i;

	i = '0';
	while (c[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int main (void)
{
	char str1[20] = "bonjour";
	char str2[20] = "s f h e";
	char str3[20];

	printf("%\n", strlen(str1));
	printf("%\n", ft_strlen(str1));
	return (0);
}
