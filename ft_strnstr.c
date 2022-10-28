/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:15:43 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/28 13:32:13 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenlen;

	if(!*needle)
		return (char *)haystack;
	if (len == 0)
		return (0);
	lenlen = ft_strlen(needle);
	while (*haystack && len-- >= lenlen)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, lenlen) == 0)
			return (char*)haystack;
		haystack++;
	}
	return (0);
}
