/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 13:47:10 by schibi            #+#    #+#             */
/*   Updated: 2016/10/20 16:24:21 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *substr;

	i = 0;
	substr = (char *) malloc(sizeof(char) *(len + 1));
	if(!s || !substr)
		return(NULL);
	while( i != start)
		i++;:

	while(s[i] != '\0' && i < (len))
		{
			substr[i] = s[i];
			i++;
		}
		substr[i]  = '\0';
		return(substr);
};
