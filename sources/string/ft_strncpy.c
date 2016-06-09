/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:08:43 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 16:11:38 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"
#include "ft_string.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char *)src;
	tmp2 = dst;
	while (n--)
	{
		if (*tmp1)
			*tmp2++ = *tmp1++;
		else
			*tmp2++ = '\0';
	}
	return (dst);
}
