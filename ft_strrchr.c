/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:36:25 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/20 02:34:23 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//we need to change const char to char to return
char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while(i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
		return (0);
}
