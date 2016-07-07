/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 10:16:45 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/07 10:32:35 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_delim.h"

int		get_next_line(const int fd, char **line)
{
	int		value;

	value = 0;
	value = get_next_delim(fd, line, "\n");
	return (value);
}
