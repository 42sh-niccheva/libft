/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarray_nl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/03 13:56:40 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/03 14:12:20 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

ssize_t		ft_putarray_nl_fd(const char **array, const int fd)
{
	return (ft_putarray_fd(array, "\n", fd) + ft_putnewline_fd(fd));
}
