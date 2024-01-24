/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:27:22 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/24 20:58:24 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	*ft_strchr(const char *s, char *c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)& s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)& s[i]);
	return (NULL);
}


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
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (ft_strrchr(set, s1[len]) && len > 0)
		len --;
	str = ft_substr(s1, 0, len + 1);
	if (!str)
		return (NULL);
	return (str);
}
// int main()
// {
// 	char	s49[100] = "STRTRIM_TEST !";
// 	char	s50[100] = "SxTRxTxRxIxM_TExSxT x!";
// 	char	set49[100] = "";
// 	char	set50[100] = "";
// 	char	*check49 = ft_strtrim(s49, set49);
// 	char	*check50 = ft_strtrim(s50, set50);
// 	printf("ft_strtrim49 |%s|\n", check49); free(check49);
// 	printf("ft_strtrim50 |%s|\n\n\n\n", check50); free(check50);
// }