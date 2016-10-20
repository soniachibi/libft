/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 05:19:45 by schibi            #+#    #+#             */
/*   Updated: 2016/10/20 05:22:37 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i =0;
	if( ft_strlen(s1) != ft_strlen(s2))
			return(0);
	else if(i < n)
		{	
			while( s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
				i ++;
			return(1);
		}
	return(0);

}
