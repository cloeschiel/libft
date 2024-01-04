/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:38:37 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/04 21:05:18 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(little);
	if (len == 0 || !little)
		return ((char *) big);
	if (ft_strlen(little) > j)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		if (ft_strncmp (&big[i], little, len) == 0 && little [0] == big[i])
		{
			if(i + ft_strlen(little) > len)
				return (NULL);
			return((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
