/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safo3n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 15:23:19 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "lst.h"
#include "do_op.h"
#include "stack_info.h"

void	ft_push_all_ex3(t_stack **sta, t_stack **stb)
{
	int	pushed;
	int	stack_size;

	pushed = 0;
	stack_size = ft_lstsize(*sta);
	while (stack_size > 6 && pushed < stack_size / 2)
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
	t_stack	*tmp_b;
	int		total_cost;

	total_cost = abs((*stb)->cost_a) + abs((*stb)->cost_b);
	tmp_b = *stb;
	while (tmp_b)
	{
		if (total_cost)
		tmp_b = tmp_b->next;
	}
}
