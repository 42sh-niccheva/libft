/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pointer_distance.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 09:12:00 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/06 09:12:52 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

size_t		ft_get_pointer_distance(const char *start, const char *end)
{
	size_t	i;

	i = 0;
	while (start + i != end)
		++i;
	return (i);
}
