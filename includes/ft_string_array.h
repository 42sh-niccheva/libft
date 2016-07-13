/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_array.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 10:09:31 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/13 10:35:29 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_ARRAY_H
# define FT_STRING_ARRAY_H

# include <stddef.h>

void		ft_delete_array(char **array);
size_t		ft_count_array(const char **array);

#endif
