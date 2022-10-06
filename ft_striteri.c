/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:08:47 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/01 21:26:04 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;
	if (!s || !f)
		return ; //since function type is void return won´t do anything
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]); //here passing the adress of each s character to f
		i++;
	}
}