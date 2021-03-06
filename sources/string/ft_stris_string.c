/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stris_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 11:06:26 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/15 21:23:56 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static bool	ft_isstring_printable(int c)
{
	return (ft_isprint(c) || ft_isspace(c));
}

bool		ft_stris_string(const char *s)
{
	return (ft_strstart_with(s, "\"") && ft_strend_with(s, "\"")
			&& ft_strapply_predicate(s, &ft_isstring_printable));
}
