/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:47:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/05 16:37:34 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: Allocates with malloc and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *_s, char const *cut)
{
	char	*s;
	size_t	size;

	s = ((char *)_s);
	if (!_s || !cut)
		return (NULL);
	while (*s && ft_strchr(cut, *s))//find the first occurence of cut in string s and takes it out
		s++;
	size = ft_strlen(s);
	while (size && ft_strrchr(cut, s[size]))//find the last occurence of cut in string s and takes it out
		size--;
	return (ft_substr(s, 0, size + 1));//returning the remaining characters from s
}
