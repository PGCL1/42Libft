/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:41:11 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:53:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: identifies the first occurence of a character c in a string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	p;

	p = 0;
	while (p < n)
	{
		if ((((unsigned char *)s)[p]) == (unsigned char) c)
			return ((unsigned char *)s + p);
		p++;
	}
	return (0);
}
