/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:34:07 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/10 17:20:27 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: identifies whether a character is ASCII or not.
*/

int	ft_isascii(int c)
{
	//an ascii character is any characters between 0 and 0177 inclusive.
	if (c < 0 || c > 0177)
		//FALSE
		return (0);
	else
		//TRUE
		return (1);
}
