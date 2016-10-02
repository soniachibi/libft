/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 01:45:15 by schibi            #+#    #+#             */
/*   Updated: 2016/10/01 00:06:21 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long i;

	i = 0;
	if (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1[i] == s2[i] && (i < n))
			i++;
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}