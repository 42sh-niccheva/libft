/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 15:00:15 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 15:03:15 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		j;

	if (!(s1 && s2))
		return (NULL);
	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (join)
	{
		i = 0;
		j = 0;
		while (s1[j])
			join[i++] = s1[j++];
		j = 0;
		while (s2[j])
			join[i++] = s2[j++];
	}
	return (join);
}
