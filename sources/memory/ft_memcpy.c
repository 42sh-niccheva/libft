/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 16:30:59 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 16:32:12 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst && src)
	{
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	}
	return (dst);
}
