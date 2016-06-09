/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 15:17:38 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 15:21:04 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*new;

	len = ft_strlen(s);
	new = ft_strnew(len);
	i = 0;
	if (new)
	{
		while (i < len)
		{
			new[i] = f(s[i]);
			i++;
		}
	}
	return (new);
}
