/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:22:39 by cschiel           #+#    #+#             */
/*   Updated: 2023/11/03 18:24:36 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;

	if (!dst && !src)
		return (0);
	ptr = (unsigned char *) dst;
	ptr1 = (unsigned char *) src;
	while (n-- > 0)
		*(ptr++) = *(ptr1++);
	return (dst);
}
