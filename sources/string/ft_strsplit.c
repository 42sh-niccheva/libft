/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 16:22:33 by niccheva          #+#    #+#             */
/*   Updated: 2016/01/01 17:03:14 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

static int		ft_nb_separator(const char *s, char c)
{
	int			sep;
	size_t		nb_sp;
	size_t		i;

	nb_sp = 0;
	sep = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
		{
			sep++;
			while (s[i++] == c)
				nb_sp++;
		}
		else
			i++;
	}
	if (nb_sp == i)
		return (-1);
	return (sep);
}

static void		ft_write_in_split(char **split, const char *s, char c)
{
	int			i;
	int			j;
	int			word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			split[j++] = ft_strsub(s, (i - word_len), word_len);
			while (s[i] == c)
				i++;
			word_len = 0;
		}
		else
		{
			i++;
			word_len++;
		}
	}
	if (word_len)
		split[j++] = ft_strsub(s, (i - word_len), word_len);
	split[j] = NULL;
}

char			**ft_strsplit(const char *s, char c)
{
	char		**split;
	int			nb_words;

	if (!s)
		return (NULL);
	nb_words = (1 + ft_nb_separator(s, c));
	split = (char **)malloc(sizeof(*split) * (nb_words + 1));
	if (split)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
			ft_write_in_split(split, s, c);
		else
			split[0] = NULL;
	}
	return (split);
}
