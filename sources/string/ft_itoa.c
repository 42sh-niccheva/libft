/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 13:38:08 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 16:57:52 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"

static char		*ft_return_string(BOOL neg, int size, int n)
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
		nbr[i] = ((n / a) + '0');
		i++;
		n %= a;
		a /= 10;
	}
	return (nbr);
}

char			*ft_itoa(int n)
{
	BOOL		neg;
	int			i;
	int			size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = FALSE;
	if (n < 0)
		neg = TRUE;
	n = (n > 0) ? n : -n;
	i = 1;
	size = 0;
	while ((n / i) > 9)
	{
		i *= 10;
		size++;
	}
	return (ft_return_string(neg, size, n));
}
