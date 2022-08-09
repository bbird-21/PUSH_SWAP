/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safo3n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/09 19:24:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "lst.h"
#include "do_op.h"
#include "stack_info.h"
#include "do_move.h"

void	ft_push_all_ex3(t_stack **sta, t_stack **stb)
{
	int	pushed;
	int	stack_size;

	pushed = 0;
	stack_size = ft_lstsize(*sta);
	while (pushed < stack_size / 2)
	{
		if ((*sta)->index <= stack_size / 2)
			pushed += ft_push(sta, stb);
		else
			ft_rotate(sta);
	}
	while (stack_size - pushed > 3)
		pushed += ft_push(sta, stb);
}



void	do_cheapest_op(t_stack **sta, t_stack **stb)
{
	t_cost	cost;
	get_cheapest(*stb, &cost);
	whole_rotate(sta, stb, &cost);
	whole_rrotate(sta, stb, &cost);
	do_rotate(sta, stb, &cost);
	do_rrotate(sta, stb, &cost);
	ft_push(stb, sta);
}

void	settle_stack(t_stack **sta)
{
	int	pos_lowest_index;
	int	stack_size;

	stack_size = ft_lstsize(*sta);
	pos_lowest_index = get_pos_lowest_index(*sta);
	while ((pos_lowest_index < stack_size / 2 && pos_lowest_index > 0))
	{
		ft_rotate(sta);
		pos_lowest_index = get_pos_lowest_index(*sta);
	}
	while ((pos_lowest_index > stack_size / 2 && pos_lowest_index > 0))
	{
		ft_rrotate(sta);
		pos_lowest_index = get_pos_lowest_index(*sta);
	}
}
