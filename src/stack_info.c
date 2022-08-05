/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:31:23 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 15:23:19 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "lst.h"
#include <stdio.h> // TO REMOVE

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	get_highest_index(t_stack *st)
{
	int highest_index;

	highest_index = st->index;
	while (st)
	{
		if (st->index > highest_index)
			highest_index = st->index;
		st = st->next;
	}
	return (highest_index);
}

#include <stdio.h>

int	get_pos_lowest_index(t_stack *st)
{
	int	pos_lowest_index;
	int	lowest_index;

	lowest_index = st->index;
	pos_lowest_index = 0;
	while (st)
	{
		if (st->index < lowest_index)
		{
			pos_lowest_index = st->pos;
			lowest_index = st->index;
		}
		st = st->next;
	}
	return (pos_lowest_index);
}

void	set_stack_cost(t_stack *sta, t_stack *stb)
{
	int	stack_size_a;
	int	stack_size_b;


	stack_size_a = ft_lstsize(sta);
	stack_size_b = ft_lstsize(stb);
	while (stb)
	{
		if (stb->pos <= stack_size_b / 2)
		{
			stb->cost_b = stb->pos;
			if (stb->target_pos <= stack_size_a / 2)
				stb->cost_a = stb->target_pos;
			else
				stb->cost_a = stb->target_pos - stack_size_a;
		}
		else
		{
			stb->cost_b = (stb->pos - stack_size_b);
			if (stb->target_pos <= stack_size_a / 2)
				stb->cost_a = stb->target_pos;
			else
				stb->cost_a = stb->target_pos - stack_size_a;
		}
		stb = stb->next;
	}
}

