/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:58:27 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/30 20:47:04 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_neg(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t' 
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v')		
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = is_neg(str[i]);
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		result = ((result * 10) + str[i] - '0');
		i++;
	}
	return	(sign * result);
}
