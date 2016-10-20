/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 20:42:30 by schibi            #+#    #+#             */
/*   Updated: 2016/10/17 22:43:59 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;
	int		len;

	if (s)
	{
	 i = 0;
	 len = ft_strlen(s);
	while (i < len)
			{
				s[i] = '\0';
			    i++;
			}
	}
}

