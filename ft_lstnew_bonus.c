/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:48:13 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/06 16:16:49 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: Allocates with malloc and returns a new node. The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));//creating a new node and allocating memory to it
	if (!node)
		return (NULL);
	node -> content = content;//content of the present node
	node -> next = NULL;//next node is NULL
	return (node);//returning node
}
