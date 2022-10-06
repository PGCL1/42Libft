/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:11:48 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/05 16:27:38 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
*/

char	*ft_strdup(const char *s1)
{
	char			*string;
	unsigned int	len;

	len = ft_strlen((char *)s1);
	string = (malloc(len * sizeof(char) + 1));//allocating memory for the pointer to s1, memory is allocated for the size of s1 + 1 being the null terminator.
	if (!string)
		return (0);
	ft_memcpy(string, s1, len * sizeof(char));//copies the contents of s1 into string.
	string[len] = 0;
	return (string);
}
