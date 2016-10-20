/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 01:47:11 by schibi            #+#    #+#             */
/*   Updated: 2016/10/20 16:04:03 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}