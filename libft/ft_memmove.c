/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:32:12 by bmorales          #+#    #+#             */
/*   Updated: 2023/02/22 11:57:38 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	if (dest > src)
	{
		while (len-- > 0)
		{
			((unsigned char *)dest)[len] = ((unsigned char *) src)[len];
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	return (dest);
}
