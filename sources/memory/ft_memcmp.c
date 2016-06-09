/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 17:53:53 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 17:38:36 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include <sys/types.h>

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const u_char	*tmp1;
	const u_char	*tmp2;

	if (s1 && s2)
	{
		tmp1 = s1;
		tmp2 = s2;
		while (n--)
		{
			if (*tmp1 != *tmp2)
				return (*tmp1 - *tmp2);
			tmp1++;
			tmp2++;
		}
	}
	return (0);
}
