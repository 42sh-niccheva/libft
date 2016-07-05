/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 14:19:16 by niccheva          #+#    #+#             */
/*   Updated: 2016/07/05 14:24:00 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_strndup(const char *s, size_t size)
{
	char	*new;

	new = ft_strnew(size);
	if (new)
		new = ft_strncpy(new, s, size);
	return (new);
}
