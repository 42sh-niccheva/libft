/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstart_with.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:42:52 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 10:49:26 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

BOOL		ft_strstart_with(const char *s, const char *search)
{
	size_t	len_s;
	size_t	len_search;
	size_t	i;

	if (s && search)
	{
		len_s = ft_strlen(s);
		len_search = ft_strlen(search);
		i = 0;
		if (len_search > len_s)
		{
			return (FALSE);
		}
		while (i < len_search)
		{
			if (s[i] != search[i])
			{
				return (FALSE);
			}
			i++;
		}
		return (TRUE);
	}
	return (FALSE);
}
