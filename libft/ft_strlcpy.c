/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:41:11 by bmorales          #+#    #+#             */
/*   Updated: 2023/02/22 12:04:27 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (destsize)
	{
		while (i < srcsize && i < destsize)
		{
			dest[i] = src[i];
			i++;
		}
		if (destsize > srcsize)
			dest[srcsize] = 0;
		else
			dest[destsize - 1] = 0;
	}
	return (srcsize);
}
