/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:04:14 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/30 22:28:05 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//we need to change const char to char to return
char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] != (char)c)
			i++;
		else if (s[i] == (char)c)
			break;
	}
	if (s[i] == '\0' && s[i] != (char)c)
		return (0);
	return((char *)&s[i]);
}
