/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:06:22 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/07 22:26:32 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: tests for any characters for uppercase or lowercase character.
*/

int	ft_isalpha(int x)
{
	//Alphabetical characters are present in these two ranges
	if (!((x >= 65 && x <= 90) || (x >= 97 && x <= 122)))
	{
	//TRUE
		return (0);
	}
	//FALSE
	return (1);
}
