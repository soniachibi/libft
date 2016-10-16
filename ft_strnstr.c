/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/15 19:23:37 by schibi            #+#    #+#             */
/*   Updated: 2016/10/15 19:34:40 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && little[j] != '\0' && i < len)
	{
		
		if(big[i] == little[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		i++;
	}
	if(little[j] == '\0')
		return((char*)&big[i - j]);
	return(0);
}
/*
int	main(void)
{
	const char big[] = "ABABABAC";
	const char little[] = "ABABAC";

	printf("%s\n", ft_strstr(big, little));
	printf("%s\n", strstr(big, little));
}*/
