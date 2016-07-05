/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapply_predicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 10:47:03 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/05 11:07:15 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

BOOL		ft_strapply_predicate(const char *s, BOOL (*predicate)(int c))
{
	BOOL	ret;
	size_t	i;

	ret = TRUE;
	i = 0;
	if (!s)
		return (FALSE);
	while (s[i] && ret)
	{
		ret = predicate(s[i]);
		++i;
	}
	return (ret);
}
