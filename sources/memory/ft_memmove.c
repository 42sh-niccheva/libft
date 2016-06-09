/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 17:57:20 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 17:59:29 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*mov;

	mov = ft_memalloc(len);
	if (dst && src && mov)
	{
		mov = ft_memcpy(mov, src, len);
		dst = ft_memcpy(dst, mov, len);
		ft_memdel(&mov);
	}
	return (dst);
}
