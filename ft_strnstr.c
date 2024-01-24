/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:38:37 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/24 19:07:30 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (little[j] && big[i + j] == little[j]
				&& big[i + j] != '\0' && i + j < len)
			{
				j++;
			}				
			if (little[j] == '\0')
				return (((char *)big) + i);
		}
		i++;
	}
	return (NULL);
}
