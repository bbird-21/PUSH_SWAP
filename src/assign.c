/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:10:16 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/02 18:31:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "assign.h"
#include "tools.h"

// void	ft_assign_index(t_stack *sta)
// {
// 	t_stack	*current;
// 	t_stack	*min;
// 	t_stack	*tmp2;

// 	int	index;

// 	index = 1;
// 	tmp2 = sta;
// 	while (tmp2)
// 	{
// 		current = NULL;
// 		min = sta;
// 		while (min)
// 		{
// 			if (!min->index && (!current || min->value < current->value))
// 				current = min;
// 			min = min->next;
// 		}
// 		current->index = index++;
// 		tmp2 = tmp2->next;
// 	}
// }

void	ft_assign_index(t_stack *sta, int index)
{
	t_stack	*current;
	t_stack	*min;

	current = NULL;
	min = sta;
	while (min)
	{
		if (!min->index && (!current || min->value < current->value))
			current = min;
		min = min->next;
	}
	if (current)
	{
		current->index = index;
		ft_assign_index(sta, index + 1);
	}
}

void	set_pos(t_stack *sta, t_stack *stb)
{
	int		pos;

	pos = 0;
	while (sta)
	{
		sta->pos = pos;
		sta = sta->next;
		pos++;
	}
	pos = 0;
	while (stb)
	{
		stb->pos = pos;
		stb = stb->next;
		pos++;
	}
}
