/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 18:01:24 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 18:02:17 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void		*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((char *)b)[len] = (unsigned char)c;
	return (b);
}
