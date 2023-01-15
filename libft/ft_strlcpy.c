/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <bmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:41:11 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/15 18:47:34 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (dstsize)
	{
		while (i < srcsize && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		if (dstsize > srcsize)
			dst[srcsize] = 0;
		else
			dst[dstsize - 1] = 0;
	}
	return (srcsize);
}
