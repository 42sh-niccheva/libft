/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 10:19:10 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/13 10:34:30 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_array.h"
#include <stddef.h>

size_t	ft_count_array(const char **array)
{
	size_t	size;

	size = 0;
	while (array[size])
		++size;
	return (size);
}
