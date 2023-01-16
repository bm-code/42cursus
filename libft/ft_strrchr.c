/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:06:44 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/16 08:06:44 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;
    while (*s)
        s++;
    if (c == 0)
        return ((char *)s);
    while (s >= str)
    {
        if (*s == c)
            return ((char *)s);
        s--;
    }
    return (0);
}