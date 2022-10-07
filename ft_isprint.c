/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:38:53 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/07 22:27:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: identifies whether or not the character is printable
*/

int	ft_isprint(int x)
{
	//printable characters are found in this range of the ASCII table
	if (!(x >= 32 && x <= 126))
	{
	//TRUE
		return (0);
	}
	//FALSE
	return (1);
}
