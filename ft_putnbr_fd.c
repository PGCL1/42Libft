/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:05:37 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/03 00:11:19 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: outputs the integer ’n’ to the given file descriptor.
*/

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd); //print -
		ft_putchar_fd('2', fd);//print 2
		ft_putnbr_fd(147483648, fd);//will recursively call ft_putnbr to call the rest of n
	}
	else if (n == 2147483647)
	{
		ft_putchar_fd('2', fd);//print 2
		ft_putnbr_fd(147483647, fd);//will recursively call ft_putnbr to call the rest of n
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);//print -
		ft_putnbr_fd(-n, fd);//will recursively call ft_putnbr to call the rest of n
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);//enables us to go to previous digit
		ft_putnbr_fd(n % 10, fd);//prints digits
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
