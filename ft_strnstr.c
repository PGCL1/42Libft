/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:47:25 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/05 16:27:38 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: locates the first occurrence of the null-terminated to_find_  in the string _str, where not more than len characters are searched.
*/

char	*ft_strnstr(const char *_str, const char *to_find_, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*to_find;

	str = ((char *)_str);
	to_find = ((char *)to_find_);
	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);//if to_find_ is NULL then _str is returned
	while (str[i] != 0 && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != 0)
		{
			if (to_find[j + 1] == 0 && (i + j) < len)
				return (&(str[i]));//when an occurence is found, the str is returned starting from the position where the occurence started
			j++;
		}
		i++;
	}
	return (NULL);//if there are no occurence of to_find_ in _str then the result is NULL
}
