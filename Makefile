# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schibi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/28 18:35:00 by schibi            #+#    #+#              #
#    Updated: 2016/10/14 20:07:04 by schibi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC= gcc

CFLAGS= -Wall -Wextra -Werror

RM= /bin/rm -rf

LDFLAGS= -L.

LDLIBS= -lft

SRC= ft_strlen.c\
	 ft_strstr.c\
	 ft_strcmp.c\
	 ft_strncmp.c\
	 ft_strcpy.c\
	 ft_strncpy.c\
	 ft_isalpha.c\
	 ft_isdigit.c\
	 ft_isalnum.c\
	 ft_isprint.c\
	 ft_isascii.c\
	 ft_memset.c\
	 ft_bzero.c\
	 ft_strdup.c\
	 ft_memcpy.c\
	 ft_memccpy.c\
	 ft_memrevcpy.c\
	 ft_memmove.c\
	 ft_memchr.c\
	 ft_memcmp.c\
	 ft_strcat.c\
	 ft_toupper.c\
	 ft_tolower.c\
	 ft_strchr.c\
	 ft_putchar.c\

OBJ= $(SRC:.c=.o)

$(NAME):
	@ $(CC) $(CFLAGS) -I libft.h -c $(SRC)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)
	@ echo "\033[32m\nLibft created!\033[0m"

all: $(NAME)

clean:
	@ $(RM) *.o
	@ echo "\033[33m\nLibft object deleted!\033[0m"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "\033[31m\nLibft deleted!\033[0m"

re: fclean all

bft created!\033[0.PHONY: all re clean fclean
