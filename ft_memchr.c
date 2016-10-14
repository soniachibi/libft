/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 00:06:42 by schibi            #+#    #+#             */
/*   Updated: 2016/10/14 01:47:46 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	if(str[i] == '\0')
		return(NULL);
	while((i<n) && (n != '\0'))
	{
		if(str[i] == (unsigned char)c)
			return((void *)&str[i]);
		i++;
	}
	return(NULL);
}
