/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:45:19 by tiwong            #+#    #+#             */
/*   Updated: 2023/09/11 22:10:39 by tiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	des[] = "Hello";
	char	sr[] = "Bye";
	size_t	siz = 4;

	ft_strlcpy(des, sr, siz);
	printf("Mine    : %s\n", des);
//	strlcpy(des, sr, siz);
//	printf("strlcpy : %s\n", des);
	return (0);
}*/
