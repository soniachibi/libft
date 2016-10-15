/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 23:57:52 by schibi            #+#    #+#             */
/*   Updated: 2016/10/14 00:06:09 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlen(const char *s);
char *ft_strstr(const char *big, const char *little);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strcpy(char *dst, const char *src);
char *ft_strncpy(char *dst, const char *src, size_t len);
int	ft_isalpha(int	c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isprint(int c);
int	ft_isascii(int c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
char *ft_strdup(const char *s1);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *ft_memrevcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strcat(char *s1, const char *s2);
int	ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char	ft_putchar(char c);

#endif
