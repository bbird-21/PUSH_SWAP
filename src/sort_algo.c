/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/09 16:30:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_algo.h"
#include "safo3n.h"
#include "lst.h"
#include "do_op.h"
#include "utils.h"
#include "assign.h"
#include "stack_info.h"

void	ft_sort_two(t_stack **sta)
{
	ft_swap(sta);
}

void	ft_sort_three(t_stack **sta)
{
	int	highest_index;

	highest_index = get_highest_index(*sta);
	if ((*sta)->index == highest_index)
		ft_rotate(sta);
	else if ((*sta)->next->index == highest_index)
		ft_rrotate(sta);
	if ((*sta)->index > (*sta)->next->index)
		ft_swap(sta);
}

void	ft_sort(t_stack **sta, t_stack **stb)
{
	ft_push_all_ex3(sta, stb);
	ft_sort_three(sta);

	while (*stb)
	{
		set_pos(*sta, *stb);
		set_target_pos(*sta, *stb);
		set_cost(*sta, *stb);
		do_cheapest_op(sta, stb);
	}
	if (!(ft_stack_is_sorted(*sta)))
		settle_stack(sta);
}

t_bool	ft_stack_is_sorted(t_stack *sta)
{
	while (sta)
	{
		if (sta->value > sta->next->value)
			return (false);
		sta = sta->next;
	}
	return (true);
}
