/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:00:25 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/28 21:00:50 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_digit(long n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n = -n;
	}
	while (n > 0)
	{
		digit++;
		n /= 10;
	}:
	return (digit);
}

char	*ft_itoa(int nb)
{
	char		*ans;
	size_t		dg;
	long	nbr;

	nbr = nb;
	dg = ft_digit(nbr);
	ans = ft_calloc(1, dg + 1);
	if (!ans)
		return (0);
	if (nbr < 0)
	{
		ans[0] = '-';
		nbr = -nbr;
	}
	dg--;
	while (1)
	{
		ans[dg] = (nbr % 10) + '0';
		nbr /= 10;
		dg--;
		if (nbr == 0)
			return (ans);
	}
	return (ans);
}
