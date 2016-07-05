/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stris_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 11:33:08 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/05 11:53:00 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

BOOL		ft_stris_number(const char *s)
{
	BOOL	ret;
	size_t	occur_number;
	char	**tab;

	occur_number = ft_strget_occur_number(s, ".");
	if (occur_number > 1)
		return (FALSE);
	if (occur_number == 1)
	{
		tab = ft_strsplit(s, '.');
		ret = ft_stris_int(tab[0])
			&& ft_strapply_predicate(tab[1], &ft_isdigit);
		ft_strdel(&(tab[0]));
		ft_strdel(&(tab[1]));
		free(tab);
		return (ret);
	}
	else
		return (ft_stris_int(s));
}
