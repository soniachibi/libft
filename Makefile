# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schibi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/28 18:35:00 by schibi            #+#    #+#              #
#    Updated: 2016/10/04 09:38:00 by schibi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC= gcc

CFLAGS= -Wall -Wextra -Werror

RM= /bin/rm -rf

LDFLAGS= -L.

LDLIBS= -lft

SRC= ft_strlen.c \
	 ft_strstr.c\
	 ft_strcmp.c\
	 ft_strncmp.c\
	 ft_strcpy.c\
	 ft_strncpy.c\
	 ft_isalpha.c\
     ft_isdigit.c\
	 ft_isalnum.c\
	 ft_isprint.c\
	 ft_strdup.c\
OBJ= $(SRC: .c=.o)

$(NAME):
	@ $(CC) $(CFLAGS) -I libft.h -c $(SRC)
	@ ar rc $(NAME) $(OBJ)
	@ echo "\033[32m\nLibft created!\033[0m"

all: $(NAME)

clean:
	@ $(RM) $(OBJ)
	@ echo "033[33mLibft object deleted!\033[0m"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "\033[31mLibft deleted!\033[0m"

re: fclean all

.PHONY: all re clean fclean

