/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:46:27 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/30 22:15:51 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ans;
	size_t	len;

	len = ft_strlen(s1);
	if (!(ans = (char *)ft_calloc(1, len + 1)))
		return (0);
	len = 0;
	while (s1[len])
	{
		ans[len] = s1[len];
		len++;
	}
	return (ans);
}

