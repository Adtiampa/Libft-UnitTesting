/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:19:12 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/19 19:29:10 by atiampae         ###   ########.fr       */
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
