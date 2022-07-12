/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:10:46 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/12 14:35:38 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "lst.h"
#include "basics.h"

void	ft_swap(t_stack **lst)
{
	// int		lstlenght;
	// t_stack	*tmp;

	// lstlenght = ft_lstlenght(*lst);
	while (*lst)
	{
		*lst = (*lst)->next;
	}
}
