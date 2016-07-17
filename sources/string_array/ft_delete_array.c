/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 16:13:25 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/17 22:57:41 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_string_array.h"
#include <stdlib.h>

void	ft_delete_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		ft_strdel(&(array[i]));
		i++;
	}
	free(array);
	array = NULL;
}
