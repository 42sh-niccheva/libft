/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stris_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 10:58:27 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/15 21:23:23 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

bool		ft_stris_int(const char *s)
{
	if (ft_strstart_with(s, "+") || ft_strstart_with(s, "-"))
		return (ft_strapply_predicate(s + 1, &ft_isdigit));
	return (ft_strapply_predicate(s, &ft_isdigit));
}
