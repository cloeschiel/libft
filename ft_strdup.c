/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:08:47 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/10 20:43:28 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s)+1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	return ((char *) ft_memcpy(str, s, len));
}
