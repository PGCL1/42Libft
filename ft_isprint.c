/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:38:53 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:53:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: identifies whether or not the character is printable
*/

int	ft_isprint(int x)
{
	if (!(x >= 32 && x <= 126))//printable characters are found in this range of the ASCII table
	{
		return (0);//TRUE
	}
	return (1);//FALSE
}
