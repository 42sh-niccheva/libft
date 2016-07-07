/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_delim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 22:11:04 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/07 10:08:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_delim.h"
#include <sys/types.h>
#include <unistd.h>

static void		gnd_extract_content(char **stock, char **line, char *delim,
									size_t size_delim)
{
	size_t		size;
	char		*ptr;

	ptr = *stock;
	size = (size_t)delim - (size_t)*stock;
	*line = ft_strndup(*stock, size);
	*stock = ft_strdup(delim + size_delim);
	ft_strdel(&ptr);
}

static int		gnd_read(const int fd, char **stock)
{
	size_t		size;
	char		buf[BUF_SIZE + 1];
	char		*ptr;

	ft_bzero(buf, BUF_SIZE + 1);
	ptr = *stock;
	size = read(fd, buf, BUF_SIZE);
	*stock = ft_strjoin(*stock, buf);
	ft_strdel(&ptr);
	return (size);
}

int				get_next_delim(const int fd, char **line, const char *delim)
{
	static char	*stock = NULL;
	int			value;
	char		*ptr;

	value = 0;
	if (stock == NULL)
		stock = ft_strnew(0);
	if ((ptr = ft_strstr(stock, delim)) != NULL)
		gnd_extract_content(&stock, line, ptr, ft_strlen(delim));
	else
	{
		while ((value = gnd_read(fd, &stock)) > 0)
		{
			if ((ptr = ft_strstr(stock, delim)) != NULL)
			{
				gnd_extract_content(&stock, line, ptr, ft_strlen(delim));
				return (value);
			}
		}
		*line = ft_strdup(stock);
		ft_strdel(&stock);
		value = -1;
	}
	return (value);
}
