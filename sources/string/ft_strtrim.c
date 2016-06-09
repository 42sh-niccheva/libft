/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:42:16 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 16:46:25 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	ft_get_len(const char *s)
{
	size_t		len;

	len = ft_strlen(s);
	while (ft_isspace(*s++))
		len--;
	while (*s)
		s++;
	s--;
	while (ft_isspace(*s--))
		len--;
	return (len);
}

char			*ft_strtrim(const char *s)
{
	size_t		len;
	char		*trim;
	char		*tmp;

	if (!s)
		return (NULL);
	len = ft_get_len(s);
	trim = ft_strnew(len);
	if (trim)
	{
		tmp = trim;
		while (ft_isspace(*s))
			s++;
		while (len --)
			*tmp++ = *s++;
	}
	return (trim);
}
