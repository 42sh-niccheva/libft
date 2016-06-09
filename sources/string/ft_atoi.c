/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 12:08:51 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 13:20:41 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_atoi(const char *s)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (ft_issigned(*s))
		sign = (*s++ == '+') ? 1 : -1;
	while (ft_isdigit(*s))
		n = (n * 10) + (*s++ - '0');
	n *= sign;
	return (n);
}
