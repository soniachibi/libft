/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 08:50:44 by schibi            #+#    #+#             */
/*   Updated: 2016/10/01 09:54:51 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t srclen;

	i = 0;

	while (dst[i] != '\0' && src[i] != '\0' && i < len)
	{
		if (i <= srclen)
				dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}

int main(void)
{
	char dst[42] = "";
	const char src[] = "Source";
	size_t len = 3;

	printf("%s", strncpy(dst, src, len));
	printf("%c", '\0');
	printf("%s", ft_strncpy(dst, src, len));
}
