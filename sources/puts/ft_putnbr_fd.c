/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 18:49:57 by niccheva          #+#    #+#             */
/*   Updated: 2015/12/31 18:51:35 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_puts.h"
#include "ft_string.h"

ssize_t		ft_putnbr_fd(const int n, const int fd)
{
	char	*str;
	ssize_t	ret;

	str = ft_itoa(n);
	ret = ft_putstr_fd(str, fd);
	ft_strdel(&str);
	return (ret);
}
