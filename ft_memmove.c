/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:01:23 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:18:20 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: copes len bytes from string src to dst. Should the two strings overlap, the copy is done in a non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));//we first copy the src to dst if dst is smaller than src, overlapping cannot be present.
	if (dst > src)//if dst is larger than src than the copy is done from last to first to prevent a destructive copy.
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len -1];
			len--;
		}
	}
	return (dst);
}
