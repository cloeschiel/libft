/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiel <cschiel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:07:47 by cschiel           #+#    #+#             */
/*   Updated: 2024/01/26 14:45:23 by cschiel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* gcc -Wall -Wextra -Werror *.c libft.h -lbsd && ./a.out
valgrind ./a.out
clear && paco
gcc tester.c -Wall -Wextra -Werror -lbsd -L. -lft && ./a.out
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h> // FLAG -lbsd
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

#define LE_XEME_EXPLOOOOSE 5
void *explosive_malloc(size_t size)
{
	static int i = 1;
	if (i < LE_XEME_EXPLOOOOSE)
	{
		//write(1, "BONJOUR\n", 8);
		i++;
		printf("\n\t... Attention - 🔨\n");
		return malloc(size);
	}
	i++;
	//write(1, "\tOREWAER\n", 9);
	printf("\n\t💥💣💢 - PAF !\n");
	return (NULL);
}


int	main(void)
{
	size_t i = 0; printf("TESTER i : %ld\n\n\n\n", i);
/*FT_IS...()********************************************************/
	/*int	c1 = '5';
	int	c2 = '5';

	printf("ft_isalpha : %d\n", ft_isalpha(c1));
	printf("   isalpha : %d\n\n",  isalpha(c2));

	printf("ft_isdigit : %d\n", ft_isdigit(c1));
	printf("   isdigit : %d\n\n",  isdigit(c2));

	printf("ft_isalnum : %d\n", ft_isalnum(c1));
	printf("   isalnum : %d\n\n",  isalnum(c2));

	printf("ft_isascii : %d\n", ft_isascii(c1));
	printf("   isascii : %d\n\n",  isascii(c2));

	printf("ft_isprint : %d\n", ft_isprint(c1));
	printf("   isprint : %d\n\n\n\n",  isprint(c2));*/
/*FT_TOUPPER()******************************************************/
	/*int	c3 = 'c';
	int	c4 = 'c';
        int     check3 = ft_toupper(c3);
        int     check4 =    toupper(c4);
	printf("ft_toupper : %d\n", check3);
	printf("   toupper : %d\n", check4);
	if (check3 == check4){printf("ft_toupper : SUCCESS\n\n");}
	if (check3 != check4){printf("ft_toupper : FAILURE\n\n");}*/
/*FT_TOLOWER()******************************************************/
	/*int	c5 = 'D';
	int	c6 = 'D';
        int     check5 = ft_tolower(c5);
        int     check6 =    tolower(c6);
	printf("ft_tolower : %d\n", check5);
	printf("   tolower : %d\n", check5);
	if (check5 == check6){printf("ft_tolower : SUCCESS\n\n");}
	if (check5 != check6){printf("ft_tolower : FAILURE\n\n");}*/
/*FT_STRLEN()*******************************************************/
	/*const char	s7[20] = " \0";
	const char	s8[20] = " \0";
	size_t		check7 = ft_strlen(s7);
	size_t		check8 =    strlen(s8);
	printf("ft_strlen : %ld\n", check7);
	printf("   strlen : %ld\n", check8);
	if (check7 == check8){printf("ft_strlen : SUCCESS\n\n");}
	if (check7 != check8){printf("ft_strlen : FAILURE\n\n");}*/
/*FT_STRLCPY()******************************************************/
	/*char		dst09[20] = "ABCD";
	char		dst10[20] = "ABCD";
	const char	src09[20] = "123456789";
	const char	src10[20] = "123456789";
	size_t		size09 = 20;
	size_t		size10 = 20;
	size_t		check09 = ft_strlcpy(dst09, src09, size09);
	size_t		check10 =    strlcpy(dst10, src10, size10);
	printf("ft_strlcpy : %ld\n", check09);
	printf("   strlcpy : %ld\n", check10);
	if (check09 == check10){printf("ft_strlcpy : SUCCESS\n\n");}
	if (check09 != check10){printf("ft_strlcpy : FAILURE\n\n");}*/
/*FT_STRLCAT()******************************************************/
	/*char		dst11[20] = "ABCD";
	char		dst12[20] = "ABCD";
	const char	src11[20] = "123456789";
	const char	src12[20] = "123456789";
	size_t		size11 = 20;
	size_t		size12 = 20;
	size_t		check11 = ft_strlcat(dst11, src11, size11);
	size_t		check12 =    strlcat(dst12, src12, size12);
	printf("ft_strlcat : %ld\n", check11);
	printf("   strlcat : %ld\n", check12);
	if (check11 == check12){printf("ft_strlcat : SUCCESS\n\n");}
	if (check11 != check12){printf("ft_strlcat : FAILURE\n\n");}*/
/*FT_STRNCMP()******************************************************/
	/*const char	s13[20] = "AAAAA";
	const char	s14[20] = "AAAAG";
	const char	s15[20] = "AAAAA";
	const char	s16[20] = "AAAAG";
	size_t		n13 = 5;
	size_t		n15 = 5;
	int		check13 = ft_strncmp(s13, s14, n13);
	int		check15 =    strncmp(s15, s16, n15);
	printf("ft_strncmp : %d\n", check13);
	printf("   strncmp : %d\n", check15);
	if (check13 == check15){printf("ft_strncmp : SUCCESS\n\n");}
	if (check13 != check15){printf("ft_strncmp : FAILURE\n\n");}*/
/*FT_STRCHR()*******************************************************/
	/*const char	s17[20] = "AZCDEFGZIJ";
	const char	s18[20] = "AZCDEFGZIJ";
	int		c17 = 'Z';
	int		c18 = 'Z';
	char*		check17 = ft_strchr(s17, c17);
	char*		check18 =    strchr(s18, c18);
	printf("ft_strchr : %s | ",  check17);
	printf("ft_strchr : %ld\n", check17 - s17);
	printf("   strchr : %s | ",  check18);
	printf("   strchr : %ld\n", check18 - s18);
	if (strncmp(check17, check18, 999) == 0)
		printf("ft_strchr : SUCCESS\n\n");
	else{printf("ft_strchr : FAILURE\n\n");}*/
/*FT_STRRCHR()******************************************************/
	/*const char	s19[20] = "ABZCDEFGZIJ";
	const char	s20[20] = "ABZCDEFGZIJ";
	int		c19 = 'Z';
	int		c20 = 'Z';
	char*		check19 = ft_strrchr(s19, c19);
	char*		check20 =    strrchr(s20, c20);
	printf("ft_strrchr : %s | ",  check19);
	printf("ft_strrchr : %ld\n", check19 - s19);
	printf("   strrchr : %s | ",  check20);
	printf("   strrchr : %ld\n", check20 - s20);
	if (strncmp(check19, check20, 999) == 0)
		printf("ft_strrchr : SUCCESS\n\n");
	else{printf("ft_strrchr : FAILURE\n\n");}*/
/*FT_STRNSTR()******************************************************/
	/*const char	big21[30] = " ABC12345DEF";
	const char	big22[30] = " ABC12345DEF";
	const char	little21[30] = "12345";
	const char	little22[30] = "12345";
	size_t		len21 = 30;
	size_t		len22 = 30;
	char*		check21 = ft_strnstr(big21, little21, len21);
	char*		check22 =    strnstr(big22, little22, len22);
	printf("ft_strnstr : %s\n",  check21);
	printf("   strnstr : %s\n",  check22);
	if (*check21 == *check22){printf("ft_strnstr : SUCCESS\n\n");}
	if (*check21 != *check22){printf("ft_strnstr : FAILURE\n\n");}*/
/*FT_ATOI()*********************************************************/
	/*const char*	nptr23 = " \t \v \f \r \n \f -01123456789";
	const char*	nptr24 = " \t \v \f \r \n \f -01123456789";
	int		check23 = ft_atoi(nptr23);
	int		check24 =    atoi(nptr24);
	printf("ft_atoi : %d\n", check23);
	printf("   atoi : %d\n", check24);
	if (check23 == check24){printf("ft_atoi : SUCCESS\n\n");}
	if (check23 != check24){printf("   atoi : FAILURE\n\n");}*/
/*FT_BZERO()********************************************************/
	// char	s25[20] = "ABCDEFGHIJ";
	// char	s26[20] = "ABCDEFGHIJ";
	// size_t	n25 = 5;
	// size_t	n26 = 5;
	// char*	check25 = (char*)s25+n25;
	// char*	check26 = (char*)s26+n26;
	// ft_bzero(s25, n25);
	//    bzero(s26, n26);
	// printf("ft_bzero : %s | ", check25-1);
	// printf("ft_bzero : %s\n", check25);
	// printf("   bzero : %s | ", check26-1);
	// printf("   bzero : %s\n", check26);
    //     if (strncmp(check25, check25, 999) == 0)
	// 	printf("ft_bzero : SUCCESS\n\n");
	// else{printf("ft_bzero : FAILURE\n\n");}
/*FT_MEMSET()*******************************************************/
	/*char	s27[20] = "ABCDEFGHIJ";
	char	s28[20] = "ABCDEFGHIJ";
	int	c27 = 'C';
	int	c28 = 'C';
	size_t	n27 = 5;
	size_t	n28 = 5;
	char*	check27 = ft_memset(s27, c27, n27);
	char*	check28 =    memset(s28, c28, n28);
	printf("ft_memset : %s\n", check27);
	printf("   memset : %s\n", check28);
        if (strncmp(check27, check28, 999) == 0)
		printf("ft_memset : SUCCESS\n\n");
	else{printf("ft_memset : FAILURE\n\n");}*/
/*FT_MEMCMP()*******************************************************/
	/*const char	s29[20] = "AAAAA";
	const char	s30[20] = "AAAAG";
	const char	s31[20] = "AAAAA";
	const char	s32[50] = "AAAAG";
	size_t		n29 = 5;
	size_t		n31 = 5;
	int		check29 = ft_memcmp(s29, s30, n29);
	int		check31 =    memcmp(s31, s32, n31);
	printf("ft_memcmp : %d\n", check29);
	printf("   memcmp : %d\n", check31);
	if (check29 == check31){printf("ft_memcmp : SUCCESS\n\n");}
	if (check29 != check31){printf("   memcmp : FAILURE\n\n");}*/
/*FT_MEMCHR()*******************************************************/
	/*char	s33[20] = "ABCDEFGHIJ";
	char	s34[20] = "ABCDEFGHIJ";
	int	c33 = 'E';
	int	c34 = 'E';
	size_t	n33 = 5;
	size_t	n34 = 5;
	char*	check33 = ft_memchr(s33, c33, n33);
	char*	check34 =    memchr(s34, c34, n34);
	printf("ft_memchr : %s\n", check33);
	printf("   memchr : %s\n", check34);
	if (strncmp(check33, check34, 999) == 0)
		printf("ft_memchr : SUCCESS\n\n");
	else{printf("ft_memchr : FAILURE\n\n");}*/
/*FT_MEMCPY()*******************************************************/
	/*char	dst35[20] = "     12345";
	char	dst36[20] = "     12345";
	char	src35[20] = "ABCDE";
	char	src36[20] = "ABCDE";
	size_t	n35 = 5;
	size_t	n36 = 5;
	char*	check35 = ft_memcpy(dst35, src35, n35);
	char*	check36 =    memcpy(dst36, src36, n36);
	printf("ft_memcpy : %s\n", check35);
	printf("   memcpy : %s\n", check36);
	if (strncmp(check35, check36, 999) == 0)
		printf("ft_memcpy : SUCCESS\n\n");
	else{printf("ft_memcpy : FAILURE\n\n");}*/
/*FT_MEMMOVE()******************************************************/
	/*char	dst37[20] = "     12345";
	char	dst38[20] = "     12345";
	char	src37[20] = "ABCDE";
	char	src38[20] = "ABCDE";
	size_t	n37 = 5;
	size_t	n38 = 5;
	char*	check37 = ft_memmove(dst37, src37, n37);
	char*	check38 =    memmove(dst38, src38, n38);
	printf("ft_memmove : %s\n", check37);
	printf("   memmove : %s\n", check38);
	if (strncmp(check37, check38, 999) == 0)
		printf("ft_memmove : SUCCESS\n\n\n\n");
	else{printf("ft_memmove : FAILURE\n\n\n\n");}*/
/*FT_CALLOC()*******************************************************/
	/*size_t	nmemb39 = 10;
	size_t	nmemb40 = 10;
	size_t	 size39 = sizeof(int);
	size_t	 size40 = sizeof(int);
	int*	check39 = ft_calloc(nmemb39, size39);
	int*	check40 =    calloc(nmemb40, size40);
	for (size_t i=0;i<nmemb39;i++)
	{printf("ft_calloc : array[%zu] = %d | %p\n",i,check39[i],check39+i);}
	printf("\n");
	for (size_t i=0;i<nmemb40;i++)
	{printf("   calloc : array[%zu] = %d | %p\n",i,check40[i],check40+i);}
	printf("\n\n\n\n");
	free(check39); free(check40);*/
/*FT_STRDUP()*******************************************************/
	/*char	s41[20] = "ABCDEFGHIJ";
	char	s42[20] = "ABCDEFGHIJ";
	char	*check41 = ft_strdup(s41);
	char	*check42 = strdup(s42);
	printf("ft_strdup41 : %s\n", check41);
	printf("   strdup42 : %s\n", check42);
	if (strncmp(check41, check42, 999) == 0)
		printf("  ft_strdup : SUCCESS \n\n");
	else{printf("  ft_strdup : FAILURE\n\n");}
	free(check41); free(check42);*/
/*FT_SUBSTR*********************************************************/
	/*char	s43[20] = "__________ABCDEFGHIJ";
	char	s44[20] = "ABCDEFGHIJKLMNOPQRST";
	int	start43 = 10;
	int	start44 = 0;
	size_t	len43 = 10;
	size_t	len44 = 10;
	char	*check43 = ft_substr(s43, start43, len43);
	char	*check44 = ft_substr(s44, start44, len44);
	printf("ft_substr43 : %s\n", check43); free(check43);
	printf("ft_substr44 : %s\n\n", check44); free(check44);*/
/*FT_STRJOIN()******************************************************/
	/*char	s45[20] = "012345";
	char	s46[20] = "A B";
	char	s47[20] = "ABCDEF";
	char	s48[20] = "C D";
	char	*check45 = ft_strjoin(s45, s47);
	char	*check46 = ft_strjoin(s46, s48);
	printf("ft_strjoin45 : %s\n", check45); free(check45);
	printf("ft_strjoin46 : %s\n\n", check46); free(check46);*/
/*FT_STRTRIM()******************************************************/
	// char	s49[100] = " STRTRIM_TEST !";
	// char	s50[100] = "STRTRIM_TEST !";
	// char	set49[100] = " ";
	// char	set50[100] = " ";
	// char	*check49 = ft_strtrim(s49, set49);
	// char	*check50 = ft_strtrim(s50, set50);
	// printf("ft_strtrim49 |%s|\n", check49); free(check49);
	// printf("ft_strtrim50 |%s|\n\n\n\n", check50); free(check50);
/*FT_SPLIT()********************************************************/
	char	s51[1000] = "W   Word1   Word22   Word333   Word4444   W";
	char	s52[100] = " ";
	char	c51 = ' ';
	char	c52 = ' ';
	char **check51 = ft_split(s51, c51);
	char **check52 = ft_split(s52, c52);
	i = 0;
	if(!check51 || !check52)
	{
		if(!check51)
		{
			printf("check51 == NULL\n");
		}
		if(!check52)
		{
			printf("check52 == NULL\n");
		}
		return (-1);
	}

	while (check51[i-1])
	{
		printf("ft_split : word[%zu] = %s\n", i, check51[i]);
		i++;
	}
	printf("\n\n\n\n"); free(check51);
	i = 0; 
	
	while (check52[i-1])
	{
		printf("ft_split : word[%zu] = %s\n", i, check52[i]);
		i++;
	}
	printf("\n\n\n\n"); free(check52);
/*FT_ITOA()*********************************************************/
	/*int	n53 = -2147483648;
	int	n54 = 2147483647;
	char	*check53 = ft_itoa(n53);
	char	*check54 = ft_itoa(n54);
	printf("ft_itoa53 : %s\n", check53); free(check53);
	printf("ft_itoa54 : %s\n\n", check54); free(check54);*/
/*FT_STRMAPI()******************************************************/
	/*char	s55[20] = "";
	char	s56[20] = "";
	char	*f55 = ;
	char	*f56 = ;
	char	*check55 = ft_strmapi(s55, f55);
	char	*check56 = ft_strmapi(s56, f56);
	printf("ft_strmapi55 : %s\n", check55); free(check55);
	printf("ft_strmapi56 : %s\n", check56); free(check56);*/
/*FT_STRITERI*******************************************************/
	/*char	s57[20] = "";
        char	s58[20] = "";
        char	*f57 = ;
        char	*f58 = ;
        char	*check57 = ft_striteri(s57, f57);
        char	*check58 = ft_striteri(s58, f58);
        printf("ft_striteri57 : %s\n", check57);
        printf("ft_striteri58 : %s\n", check58);*/
/*FT_PUTCHAR_FD()***************************************************/
	/*char	c59 = 'e';
	char	c60 = 'e';
	int	fd59 = 0;
	int	fd60 = 2;
	ft_putchar_fd(c59,fd59); printf(" : ft_putchar_fd59\n");
	ft_putchar_fd(c60,fd60); printf(" : ft_putchar_fd59\n\n");*/
/*FT_PUTSTR_FD()****************************************************/
	/*char	s61[20] = "ABCDEFGHIJ";
	char	s62[20] = "ABCDEFGHIJ";
	int	fd61 = 0;
	int	fd62 = 2;
	ft_putstr_fd(s61,fd61); printf(" : ft_putstr_fd61\n");
	ft_putstr_fd(s62,fd62); printf(" : ft_putstr_fd61\n\n\n");*/
/*FT_PUTENDL_FD()***************************************************/
	/*char	s63[20] = "ABCDEFGHIJ";
	char	s64[20] = "ABCDEFGHIJ";
	int	fd63 = 0;
	int	fd64 = 2;
	ft_putendl_fd(s63,fd63);printf(" : ft_putendl_fd63\n");
	ft_putendl_fd(s64,fd64);printf(" : ft_putendl_fd63\n\n\n");*/
/*FT_PUTNBR_FD()****************************************************/
	/*int	n65 = 2147483647;
	int	n66 = 123456;
	int	fd65 = 1;
	int	fd66 = 2;
	ft_putnbr_fd(n65,fd65);printf(" : ft_putnbr_fd65\n");
	ft_putnbr_fd(n66,fd66);printf(" : ft_putnbr_fd65\n");*/
	/***************************************************************/
	return (0);
}
