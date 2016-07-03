/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/03 13:42:23 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/03 14:13:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

ssize_t		ft_putarray_fd(const char **array, const char *sep, const int fd)
{
	ssize_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (array[i])
	{
		if (i != 0)
			size += ft_putstr_fd(sep, fd);
		size += ft_putstr_fd(array[i], fd);
		++i;
	}
	return (size);
}
