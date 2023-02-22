/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:06:34 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/16 08:06:34 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (diff == 0) && (i < n))
	{
		diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if ((diff == 0) && (i < n))
		diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (diff);
}
