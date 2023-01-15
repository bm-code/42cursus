/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <bmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:42:09 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/15 18:04:49 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')
		|| (n >= '0' && n <= '9'))
		return (1);
	else
		return (0);
}

// int	main()
// {
// 	char	*c;

// 	c = "a=";
// 	printf("%d", ft_isalnum(c));
// }
