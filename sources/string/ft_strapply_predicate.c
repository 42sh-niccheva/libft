/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapply_predicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 10:47:03 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/15 21:22:18 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

bool		ft_strapply_predicate(const char *s, bool (*predicate)(int c))
{
	bool	ret;
	size_t	i;

	ret = true;
	i = 0;
	if (!s)
		return (false);
	while (s[i] && ret)
	{
		ret = predicate(s[i]);
		++i;
	}
	return (ret);
}
