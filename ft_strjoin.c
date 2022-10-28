/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:39:58 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/23 22:53:21 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ans;

	if (!s1 || !s2)
		return (NULL);
	i = (size_t)ft_strlen(s1) + (size_t)ft_strlen(s2);
	ans = (char *)ft_calloc(1, (i + 1));
	if (!ans)
		return(0);
	ft_memcpy(ans, s1, ft_strlen(s1));
	ft_memcpy(ans + ft_strlen(s1), s2, ft_strlen(s2));	
	return (ans);
}

