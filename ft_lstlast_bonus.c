/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:35:29 by glacroix          #+#    #+#             */
/*   Updated: 2022/10/06 15:20:27 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description: returns the last node of the list. lst is the beginning of the list.
*/

t_list *ft_lstlast(t_list *lst)
{
	t_list *t;

	t = lst;//creating a new pointer to lst
	while (t)
	{
		if (!(t -> next))//if t -> next doesn't exist return t
			return (t);
		t = t -> next;
	}
	return (t);
}
