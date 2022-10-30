/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:32:28 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/30 22:20:42 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	if (dstsize == 0)
		return (0);	
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	i = 0;
	while (src[i] && (dstlen + i + 1) < dstsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (srclen + dstlen);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char dst1[1000] = "Hello"; //dstlen = 5
	char src1[] = "World"; // srclen = 5

	char dst2[1000] = "Hello";
	char src2[] = "World";

	size_t len = 1; // dstsize = 1

	printf("%lu\n",ft_strlcat(dst1,src1,len));
	printf("%lu\n",strlcat(dst2,src2,len));
	
	printf("%s\n",dst1);
	printf("%s\n",dst2);
}*/	


