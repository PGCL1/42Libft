/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:25:31 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/06 19:04:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: Adds the node ’new’ at the beginning of the list.
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.
*/

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new -> next = *lst;
	*lst = new;
}