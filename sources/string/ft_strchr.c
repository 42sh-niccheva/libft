/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 14:09:04 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 14:11:19 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		if ((char)c == '\0')
			return ((char *)s + len);
		while (i < len)
		{
			if ((char)c == s[i])
				return ((char *)s + i);
			i++;
		}
	}
	return (NULL);
}
