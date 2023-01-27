/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:06:05 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/16 08:06:05 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_aux;

	s_aux = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((char)c == s_aux[i])
			return ((void *)s_aux + i);
		i++;
	}
	return (NULL);
}
