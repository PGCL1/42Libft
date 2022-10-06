/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:06:22 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 18:58:34 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: tests for any characters for uppercase or lowercase character.
*/

int	ft_isalpha(int x)
{
	if (!((x >= 65 && x <= 90) || (x >= 97 && x <= 122)))//Alphabetical characters are present in these two ranges
	{
		return (0);//TRUE
	}
	return (1);//FALSE
}
