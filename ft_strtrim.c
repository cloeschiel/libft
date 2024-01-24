/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:27:22 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/24 16:39:10 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	str = NULL;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (!str)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (ft_strrchr(set, s1[len] && len > 0))
		len --;
	str = ft_substr(s1, 0, len + 1);
	return (str);
}
