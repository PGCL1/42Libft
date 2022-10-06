/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:19:55 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/06 18:37:29 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: counts the number of nodes in a list.
*/

int	ft_lstsize(t_list *lst)
{
	int x;

	x = 0;
	while (lst != NULL)//a non existant node in the list will have a null pointer.
	{
		lst = lst -> next;//moving through the list
		x++;//counting the number of nodes in the list
	}
	return(x);//number of nodes in the list
}

















