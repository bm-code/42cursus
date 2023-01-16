/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <benito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:05:52 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/16 08:05:52 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(int c)
{
    if (c == '\v' || c == '\n' || c == '\t' ||
        c == '\r' || c == '\f' || c == ' ')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (ft_isspace(*str))
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (ft_isdigit(*str))
    {
        result = result * 10 + (*str++ - 48);
    }
    return (result * sign);
}