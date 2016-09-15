/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 09:50:26 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/15 21:15:55 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static double	ft_extract_decimal(const char *s)
{
	char		*ptr;
	size_t		i;
	double		value;

	value = 0;
	ptr = ft_strstr(s, ".");
	if (ptr == NULL)
		return (0);
	i = (s + ft_strlen(s) - 1 - ptr);
	while (i != 0)
	{
		value = (value + (ptr[i] - '0')) / 10;
		--i;
	}
	return (value);
}

double			ft_atod(const char *s)
{
	double		value;

	value = ft_atoi(s);
	value += ft_extract_decimal(s);
	return (value);
}
