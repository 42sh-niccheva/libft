/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 19:01:42 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 19:03:12 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"
#include "ft_string.h"

ssize_t		ft_putstr_fd(const char *s, const int fd)
{
	return (write(fd, s, ft_strlen(s)));
}
