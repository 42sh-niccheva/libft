/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strget_occur_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 11:36:04 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/05 11:37:11 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strget_occur_number(const char *s, const char *s2)
{
	char		*pos;
	char		*str;
	size_t		occur;
	size_t		len_s2;

	len_s2 = ft_strlen(s2);
	str = (char *)s;
	occur = 0;
	while ((pos = ft_strstr(str, s2)))
	{
		++occur;
		str = pos + len_s2;
	}
	return (occur);
}
