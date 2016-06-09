/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 14:22:48 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 17:00:23 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strdup(const char *s)
{
	char	*new;

	new = ft_strnew(ft_strlen(s));
	if (new)
		new = ft_strcpy(new, s);
	return (new);
}
