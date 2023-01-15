/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorales <bmorales@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:33:59 by bmorales          #+#    #+#             */
/*   Updated: 2023/01/15 18:54:06 by bmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stdio.h>

int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
int		ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t length);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
#endif