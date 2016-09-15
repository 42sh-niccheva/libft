/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 13:38:08 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/15 21:21:55 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <limits.h>

static char		*ft_return_string(bool neg, int size, int n, bool is_min)
{
	char		*nbr;
	int			i;
	int			a;

	nbr = ft_strnew(size + neg + 1);
	i = 0;
	a = 1;
	while (size--)
		a *= 10;
	if (neg)
		nbr[i++] = '-';
	while (a >= 1)
	{
		if (a == 1 && is_min)
			nbr[i] = ((n / a) + 1 + '0');
		else
			nbr[i] = ((n / a) + '0');
		i++;
		n %= a;
		a /= 10;
	}
	return (nbr);
}

char			*ft_itoa(int n)
{
	bool		neg;
	bool		is_min;
	int			i;
	int			size;

	neg = true;
	is_min = true;
	if (n == INT_MIN)
		n = INT_MAX;
	else
	{
		if (n >= 0)
			neg = false;
		n = (n > 0) ? n : -n;
		is_min = false;
	}
	i = 1;
	size = 0;
	while ((n / i) > 9)
	{
		i *= 10;
		size++;
	}
	return (ft_return_string(neg, size, n, is_min));
}
