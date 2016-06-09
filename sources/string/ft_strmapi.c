/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 15:22:45 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 15:24:23 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
			new[i] = f(i, s[i]);
			i++;
		}
	}
	return (new);
}
