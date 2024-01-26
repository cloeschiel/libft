/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:23:38 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/26 15:13:28 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++i;
		while (*s && *s != c)
			++s;
	}
	return (i);
}

static void	*ft_free(char **result)
{
	int	i;

	i = -1;
	while (result[++i])
		free(result[i]);
	free(result);
	return (NULL);
}

static int	ft_len_str(char const *s, char c)
{
	int	i;

	i = 0;
	while (s && s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nb_word;
	char	**r;

	i = 0;
	if (!s)
		return (NULL);
	nb_word = ft_count_words(s, c);
	r = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!r)
		return (NULL);
	i = -1;
	while (nb_word > ++i)
	{
		while (*s == c && *s)
			s++;
		r[i] = ft_substr(s, 0, ft_len_str(s, c));
		if (!(r[i]))
			return (ft_free(r));
		s += ft_len_str(s, c);
	}
	r[i] = NULL;
	return (r);
}
