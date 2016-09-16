/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 18:24:13 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/16 10:40:17 by llapillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTS_H
# define FT_PUTS_H

# include <unistd.h>

void		ft_perror(const char *s);
ssize_t		ft_putchar(const char c);
ssize_t		ft_putchar_fd(const char c, const int fd);
ssize_t		ft_putendl(const char *s);
ssize_t		ft_putendl_fd(const char *s, const int fd);
ssize_t		ft_putnbr(const int n);
ssize_t		ft_putnbr_fd(const int n, const int fd);
ssize_t		ft_putnbr_nl(const int n);
ssize_t		ft_putnbr_nl_fd(const int n, const int fd);
ssize_t		ft_putnewline(void);
ssize_t		ft_putnewline_fd(const int fd);
ssize_t		ft_putstr(const char *s);
ssize_t		ft_putstr_fd(const char *s, const int fd);
ssize_t		ft_putarray(const char **array, const char *sep);
ssize_t		ft_putarray_fd(const char **array, const char *sep, const int fd);
ssize_t		ft_putarray_nl(const char **array);
ssize_t		ft_putarray_nl_fd(const char **array, const int fd);

#endif
