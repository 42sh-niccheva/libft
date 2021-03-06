/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 19:15:41 by niccheva          #+#    #+#             */
/*   Updated: 2016/09/15 21:19:22 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>
# include <stdbool.h>

int			ft_atoi(const char *s);
double		ft_atod(const char *s);
bool		ft_isalnum(int c);
bool		ft_isalpha(int c);
bool		ft_isascii(int c);
bool		ft_isdigit(int c);
bool		ft_islower(int c);
bool		ft_isprint(int c);
bool		ft_issigned(int c);
bool		ft_isspace(int c);
bool		ft_isupper(int c);
char		*ft_itoa(const int n);
bool		ft_strapply_predicate(const char *s, bool (*predicate)(int c));
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s);
bool		ft_strend_with(const char *s, const char *search);
bool		ft_strequ(const char *s1, const char *s2);
size_t		ft_strget_occur_number(const char *s, const char *s2);
bool		ft_stris_int(const char *s);
bool		ft_stris_number(const char *s);
bool		ft_stris_string(const char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(const char *s1, const char *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strndup(const char *s, size_t size);
bool		ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strreplace(const char *s, const char *s2, const char *s3);
char		*ft_strtrim(const char *s);
char		**ft_strsplit(const char *s, char c);
bool		ft_strstart_with(const char *s, const char *search);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strsub(const char *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
