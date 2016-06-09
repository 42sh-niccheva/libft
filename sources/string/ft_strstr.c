/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:36:40 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 16:39:24 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		len;

	if (!s2)
		return ((char *)s1);
	i = 0;
	len = (int)(ft_strlen(s1) - ft_strlen(s2));
	while (i <= len)
	{
		if (!ft_strncmp(&s1[i], s2, ft_strlen(s2)))
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
