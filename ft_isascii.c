/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:34:07 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:53:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: identifies whether a character is ASCII or not.
*/

int	ft_isascii(int c)
{
	if (c < 0 || c > 0177)//an ascii character is any characters between 0 and 0177 inclusive.
		return (0);//TRUE
	else
		return (1);//FALSE
}
