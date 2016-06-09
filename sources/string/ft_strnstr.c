/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:15:37 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 16:19:05 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char				*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int				j;
	unsigned int	i;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (*s1 && s2[j] && i < n)
	{
		if (*s1 == s2[j])
		{
			s1++;
			j++;
			i++;
		}
		else
		{
			s1 = s1 - j + 1;
			i = i - j + 1;
			j = 0;
		}
	}
	if (s2[j] == '\0')
		return ((char *)s1 - j);
	return (NULL);
}
