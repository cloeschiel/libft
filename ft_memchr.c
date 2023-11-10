/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:47:43 by cschiel           #+#    #+#             */
/*   Updated: 2023/11/09 17:32:26 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	if (s == NULL)
		return (NULL);
	i = 0;
	ptr = (void *)s;
	while (i < n)
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	return (NULL);
}
