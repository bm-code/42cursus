/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <bmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:32:12 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/15 18:40:30 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str1 && !str2)
		return (0);
	if (str1 > str2)
	{
		while (n-- > 0)
		{
			((unsigned char *)str1)[n] = ((unsigned char *)str2)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
