/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:05:47 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/03 00:11:19 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: allocate memory for count objects that are size of bytes of memory each and returns a pointer to the allocated memory. Memory is initialized with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;

	s = (unsigned char *)malloc(count * size);//memory is allocated to count objects of size of bytes of memory
	if (s == 0)
		return (0);//if the allocation fails, the pointer returns NULL.
	ft_bzero(s, count * size);//else memory is allocated and the memory is initialized with bytes of value 0.
	return (s);//after successful memory allocation, the pointer is returned.
}
