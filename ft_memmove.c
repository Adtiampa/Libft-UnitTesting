/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:44:32 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/28 22:03:17 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s;
	unsigned char *d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && !src)
		return (0);
/*	if (dst == src)
		return (dst);*/
	if (dst > src)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else 
		while (len-- > 0)
			*d++ = *s++;
	return (dst);
}
