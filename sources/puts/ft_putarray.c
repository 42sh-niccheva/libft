/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/03 13:53:16 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/03 13:54:04 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

ssize_t		ft_putarray(const char **array, const char *sep)
{
	return (ft_putarray_fd(array, sep, 1));
}
