/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:59:51 by cschiel           #+#    #+#             */
/*   Updated: 2023/10/26 19:26:11 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unisdt.h>
#include <string.h>
#include <stdlib.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
void    *ft_memset(void *s, int c, size_t n);
int     ft_tolower(int c);
int     ft_toupper(int c);
size_t  ft_strlen(const char *c)
void    ft_bzero(void *s, size_t n)


#endif