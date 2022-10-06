/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:16:21 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:05:37 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: identifies whether the character is a digit or not
*/

int	ft_isdigit(int x)
{
	if (!(x > 47 && x < 58))//digits are found in this range of the ASCII table
	{
		return (0);//TRUE
	}
	return (1);//FALSE
}
