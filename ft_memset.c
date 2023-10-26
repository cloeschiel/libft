/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:18:19 by cschiel           #+#    #+#             */
/*   Updated: 2023/10/26 19:16:34 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memset(void *s, int c, size_t n)
{
	unisigned char	*ptr;

	if (s == NULL)
		return ;
	ptr = (unsigned char*) s;
	while (len -- > 0)
		*(ptr++) = (unsigned char) c;
	return (s);
}
