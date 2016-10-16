/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/16 02:07:11 by schibi            #+#    #+#             */
/*   Updated: 2016/10/16 02:38:28 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *ptr1 = dst;
	const char *ptr2 = src;
	size_t n;
	size_t dlen;

	while(ptr1 != '\0')
	{
		++ptr1;
		--n;
		dlen = ptr1 - dst;
		n = size - dlen;
		if(n == 0)
			return(dlen + ft_strlen(ptr2));
		while(*ptr2 != '\0')
		{
			if(n != 1)
				*ptr1++ = *ptr2;
			n--;
		}
		ptr2++;
	}
	*ptr1 = '\0';
	return(dlen - (ptr2 - src));
}
