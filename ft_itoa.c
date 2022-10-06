/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:30 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/04 19:53:40 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return Value: The string representing the integer. NULL if the allocation fails.
Description: Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
1) need to count the numbers in the int (cases will include when n == 0, n < 0, n < 10, n > 9)
2) find a way to allocate memory to ints (4 bytes) becoming char  (1 byte)
3) return result
*/

#include "libft.h"

static size_t ft_count(int n)
{
	size_t len; //length of the number n

	len = 1; //length will always be 1 because itoa requires at least one digit to function
	while (n /= 10)
		len++;
	return (len);
}

char *ft_itoa(int n)
{
	char 	*str;
	size_t 	length;
	long 	num;

	length = ft_count(n);
	num = n;
	if (n < 0)
	{
		num *= -1;
		length++; // additional space to account for - sign added
	}	
	str = (char *) malloc(sizeof (char) * (length + 1));
	if (!str)
		return (NULL);
	*(str + length) = 0;
	while (length--) //why does it not work from below ?
	{
		*(str + length) = num % 10 + '0'; // to get the number in str
		num = num / 10;  //to jump to the previous number;
	}
	if (n < 0)
		*(str + 0) = '-'; //when n is negative
	return (str);
}

