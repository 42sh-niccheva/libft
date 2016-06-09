/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 16:29:06 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 16:30:25 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*new;

	new = NULL;
	if (size)
	{
		new = malloc(size);
		if (new)
			ft_bzero(new, size);
	}
	return (new);
}
