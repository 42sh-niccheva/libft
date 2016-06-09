/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 17:51:15 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 17:53:03 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include <sys/types.h>

void				*ft_memchr(const void *s, int c, size_t n)
{
	const u_char	*tmp;

	if (s)
	{
		tmp = (u_char *)s;
		while (n--)
		{
			if (*tmp == (u_char)c)
				return ((void *)tmp);
			tmp++;
		}
	}
	return (NULL);
}
