/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 00:38:56 by schibi            #+#    #+#             */
/*   Updated: 2016/10/20 00:51:54 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i =0;
	if( ft_strlen(s1) != ft_strlen(s2))
			return(0);
	else 
		{	
			while( s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
				i ++;
			return(1);
		}
	return(0);

}
