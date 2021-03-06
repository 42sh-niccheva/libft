/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_delim.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapillo <llapillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 22:10:11 by llapillo          #+#    #+#             */
/*   Updated: 2016/07/07 10:32:26 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_DELIM_H
# define GET_NEXT_DELIM_H

# define BUF_SIZE 256

int		get_next_delim(const int fd, char **line, const char *delim);
int		get_next_line(const int fd, char **line);
int		get_next_word(const int fd, char **line);

#endif
