/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 10:56:36 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/01 13:43:46 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include "ft_puts.h"

static size_t	ft_get_occur(const char *s, const char *s2)
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

static size_t	ft_get_size(const char *s, const char *s2, size_t size_s3)
{
	size_t		size;
	size_t		occur;

	occur = ft_get_occur(s, s2);
	size = ft_strlen(s) + (occur * (size_s3 - ft_strlen(s2)));
	return (size);
}

static void		ft_replace(const char *s, const char *s2, const char *s3,
						char **new)
{
	char *ptr_s;
	char *ptr_new;
	char *str;

	ptr_s = (char *)s;
	ptr_new = *new;
	while ((str = ft_strstr(ptr_s, s2)))
	{
		ptr_new = ft_strncat(ptr_new, ptr_s, ((size_t)str - (size_t)ptr_s));
		ptr_new += ((size_t)str - (size_t)ptr_s);
		ptr_s = str + ft_strlen(s2);
		ptr_new = ft_strcat(ptr_new, s3);
		ptr_new += ft_strlen(s3);
	}
	ptr_new = ft_strcat(ptr_new, ptr_s);
}

char			*ft_strreplace(const char *s, const char *s2, const char *s3)
{
	char		*new;
	size_t		size;

	new = NULL;
	if (s && s2 && s3 && *s2)
	{
		size = ft_get_size(s, s2, ft_strlen(s3));
		new = ft_strnew(size);
		if (new)
		{
			ft_replace(s, s2, s3, &new);
		}
	}
	else if (s2 && !(*s2))
	{
		return (ft_strdup(s));
	}
	return (new);
}
