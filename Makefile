#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/09 13:23:47 by niccheva          #+#    #+#              #
#    Updated: 2016/06/13 10:57:36 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libft.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

DSOURCES	=	./sources/

DOBJECTS	=	./objects/

INCLUDES	=	-I./includes

MEMORY		=	memory/ft_bzero.c
MEMORY		+=	memory/ft_memalloc.c
MEMORY		+=	memory/ft_memccpy.c
MEMORY		+=	memory/ft_memchr.c
MEMORY		+=	memory/ft_memcmp.c
MEMORY		+=	memory/ft_memcpy.c
MEMORY		+=	memory/ft_memdel.c
MEMORY		+=	memory/ft_memmove.c
MEMORY		+=	memory/ft_memset.c

PUTS		=	puts/ft_putchar.c
PUTS		+=	puts/ft_putchar_fd.c
PUTS		+=	puts/ft_putendl.c
PUTS		+=	puts/ft_putendl_fd.c
PUTS		+=	puts/ft_putnbr.c
PUTS		+=	puts/ft_putnbr_fd.c
PUTS		+=	puts/ft_putnbr_nl.c
PUTS		+=	puts/ft_putnbr_nl_fd.c
PUTS		+=	puts/ft_putnewline.c
PUTS		+=	puts/ft_putnewline_fd.c
PUTS		+=	puts/ft_putstr.c
PUTS		+=	puts/ft_putstr_fd.c

STRING		=	string/ft_atoi.c
STRING		+=	string/ft_isalnum.c
STRING		+=	string/ft_isalpha.c
STRING		+=	string/ft_isascii.c
STRING		+=	string/ft_isdigit.c
STRING		+=	string/ft_islower.c
STRING		+=	string/ft_isprint.c
STRING		+=	string/ft_issigned.c
STRING		+=	string/ft_isspace.c
STRING		+=	string/ft_isupper.c
STRING		+=	string/ft_itoa.c
STRING		+=	string/ft_strcat.c
STRING		+=	string/ft_strchr.c
STRING		+=	string/ft_strclr.c
STRING		+=	string/ft_strcmp.c
STRING		+=	string/ft_strcpy.c
STRING		+=	string/ft_strdel.c
STRING		+=	string/ft_strdup.c
STRING		+=	string/ft_strend_with.c
STRING		+=	string/ft_strequ.c
STRING		+=	string/ft_striter.c
STRING		+=	string/ft_striteri.c
STRING		+=	string/ft_strjoin.c
STRING		+=	string/ft_strlcat.c
STRING		+=	string/ft_strlen.c
STRING		+=	string/ft_strmap.c
STRING		+=	string/ft_strmapi.c
STRING		+=	string/ft_strncat.c
STRING		+=	string/ft_strncmp.c
STRING		+=	string/ft_strncpy.c
STRING		+=	string/ft_strnequ.c
STRING		+=	string/ft_strnew.c
STRING		+=	string/ft_strnstr.c
STRING		+=	string/ft_strrchr.c
STRING		+=	string/ft_strtrim.c
STRING		+=	string/ft_strsplit.c
STRING		+=	string/ft_strstart_with.c
STRING		+=	string/ft_strstr.c
STRING		+=	string/ft_strsub.c
STRING		+=	string/ft_tolower.c
STRING		+=	string/ft_toupper.c

SOURCES		=	$(MEMORY)
SOURCES		+=	$(PUTS)
SOURCES		+=	$(STRING)

OBJECTS		=	$(patsubst %.c, $(DOBJECTS)%.o, $(SOURCES))

DEPS		=	$(patsubst %.c, $(DOBJECTS)%.d, $(SOURCES))

DEPENDS		=	-MT $@ -MD -MP -MF $(subst .o,.d,$@)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	ar rcs $(NAME) $(OBJECTS)

-include $(OBJECTS:.o=.d)

$(DOBJECTS)%.o: $(DSOURCES)%.c
	@mkdir -p $(DOBJECTS)
	@mkdir -p $(DOBJECTS)/memory/
	@mkdir -p $(DOBJECTS)/puts/
	@mkdir -p $(DOBJECTS)/string/
	@echo "\033[0;32m$< compiled:\t\033[0;m\c"
	$(CC) $(CFLAGS) $(DEPENDS) -o $@ -c $< $(INCLUDES)

clean:
	@rm -rf $(DOBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
