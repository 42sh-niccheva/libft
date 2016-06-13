/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strend_with.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 10:50:02 by niccheva          #+#    #+#             */
/*   Updated: 2016/06/13 11:04:40 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

BOOL		ft_strend_with(const char *s, const char *search)
{
	size_t	len_s;
	size_t	len_search;

	if (s && search)
	{
		len_s = ft_strlen(s);
		len_search = ft_strlen(search);
		if (len_search > len_s)
			return (FALSE);
		--len_s;
		--len_search;
		while (len_search != 0)
		{
			if (s[len_s] != search[len_search])
				return (FALSE);
			--len_s;
			--len_search;
		}
		if (s[len_s] == search[len_search])
			return (TRUE);
	}
	return (FALSE);
}
