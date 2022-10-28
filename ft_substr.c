/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:24:19 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/27 00:43:43 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	real;
	
	if (!s)
		return (0);
	real = len;
	if (ft_strlen(s) < start)
		real = 0;
	else if (ft_strlen(s) - start < len)
		real = ft_strlen(s) - start;
	substr = ft_calloc(1, real + 1);
	if (!substr)
		return (0);
	i = start;
	while (i < ft_strlen(s) && (i - start) < real)
	{
		substr[i - start] = s[i]; 
		i++;
	}
	return (substr);
}
