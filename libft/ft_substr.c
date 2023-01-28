/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:24:27 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/27 12:24:45 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			count;
	char			*cpy;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	cpy = (char *) malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	i = start;
	count = 0;
	while (s[i] && count < len)
	{
		cpy[count] = s[i];
		count++;
		i++;
	}
	cpy[count] = '\0';
	return (cpy);
}
