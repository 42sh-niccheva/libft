/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_nl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 18:55:37 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 19:20:17 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"

ssize_t		ft_putnbr_nl_fd(const int n, const int fd)
{
	return (ft_putnbr_fd(n, fd) + ft_putnewline_fd(fd));
}
