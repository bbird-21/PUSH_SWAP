/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safo3n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 15:26:11 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "lst.h"
#include "do_op.h"
#include "stack_info.h"
#include "do_move.h"

void	do_push_all_ex3(t_stack **sta, t_stack **stb)
{
	int	pushed;
	int	stack_size;

	pushed = 0;
	stack_size = ft_lstsize(*sta);
	while (pushed < stack_size / 2)
	{
		if ((*sta)->index <= stack_size / 2)
			pushed += do_push(sta, stb);
		else
			do_rotate(sta, NULL);
	}
	while (stack_size - pushed > 3)
		pushed += do_push(sta, stb);
}

void	do_cheapest_op(t_stack **sta, t_stack **stb)
{
	t_cost	cost;

	get_cheapest(*stb, &cost);
	loop_whole_rrotate(sta, stb, &cost);
	loop_whole_rrotate(sta, stb, &cost);
	loop_rotate(sta, stb, &cost);
	loop_rrotate(sta, stb, &cost);
	do_push(stb, sta);
}

void	settle_stack(t_stack **sta)
{
	int	pos_lowest_index;
	int	stack_size;

	stack_size = ft_lstsize(*sta);
	pos_lowest_index = get_pos_lowest_index(*sta);
	while ((pos_lowest_index < stack_size / 2 && pos_lowest_index > 0))
	{
		do_rotate(sta, NULL);
		pos_lowest_index = get_pos_lowest_index(*sta);
	}
	while (pos_lowest_index > 0)
	{
		do_rrotate(sta, NULL);
		pos_lowest_index = get_pos_lowest_index(*sta);
	}
}
