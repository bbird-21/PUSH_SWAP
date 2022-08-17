/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/17 22:13:37 by mmeguedm         ###   ########.fr       */
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
	do_swap(sta, NULL);
}

void	ft_sort_three(t_stack **sta)
{
	int	highest_index;

	highest_index = get_highest_index(*sta);
	if ((*sta)->index == highest_index)
		do_rotate(sta, NULL);
	else if ((*sta)->next->index == highest_index)
		do_rrotate(sta, NULL);
	if ((*sta)->index > (*sta)->next->index)
		do_swap(sta, NULL);
}

void	ft_sort(t_stack **sta, t_stack **stb)
{
	do_push_all_ex3(sta, stb);
	ft_sort_three(sta);

	while (*stb)
	{
		set_pos(*sta, *stb);
		set_target_pos(*sta, *stb);
		set_cost(*sta, *stb);
		do_cheapest_op(sta, stb);
	}
	set_pos(*sta, *stb);
	if (!(ft_stack_is_sorted(*sta)))
		settle_stack(sta);
}

t_bool	ft_stack_is_sorted(t_stack *sta)
{
	while (sta->next)
	{
		if (sta->value > sta->next->value)
			return (false);
		sta = sta->next;
	}
	return (true);
}
