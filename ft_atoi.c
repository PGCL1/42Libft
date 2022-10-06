/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:05:05 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/02 23:49:08 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: converts the initial portion of the string pointed to by str to int representation
*/

int	ft_atoi(const char *str)
{
	int				i;
	int				signage;
	unsigned int	result;

	i = 0;
	result = 0;
	signage = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)//incrementing index i every time it encounters isspace
		i++;
	if (str[i] == 43 || str[i] == 45)//looking for plus or minus sign
	{
		if (str[i++] == 45)//incrementing signage while sign is a minus
			signage++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = ((str[i++] - '0') + (result * 10));//adding digits to result
	if (result > 2147483647 && !signage)
		return (-1);//because the INT MAX is 2147483647 anything above it cannot be returned as the int representation of a string
	else if (result > 2147483648 && signage)
		return (0);//because the INT MIN is -2147483648 anything below it cannot be returned as the int representation of a string
	else if (signage)
		return ((int)result * -1);//if signage exists the result is negative
	return ((int) result);//result is positive and returned
}
