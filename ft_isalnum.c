/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:26:40 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/03 00:11:19 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: tests for any characters for which ft_isalpha or ft_isdigit is true.
*/

int	ft_isalnum(int x)
{
	return (ft_isalpha(x) || ft_isdigit(x));//if zero int is returned, the test is false.
}
