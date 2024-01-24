/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:09:43 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/24 19:12:57 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	str[0] = '\0';
	ft_strlcat (str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, size);
	return (str);
}
