/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:38:52 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:53:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: copies n bytes from src to dst. If dst and src overlap, behavior is undefined. It returns the dst string.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int long	x;

	x = 0;
	if (src == 0 && dst == 0)
		return (0);
	if (src == dst)
		return (dst);
	while (x < n)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dst);
}
