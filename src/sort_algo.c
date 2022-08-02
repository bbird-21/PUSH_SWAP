/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/02 17:36:27 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "safo3n.h"
#include "lst.h"
#include "do_op.h"
#include "utils.h"

static int	get_highest_index(t_stack *st)
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

int	ft_sort_two(t_stack **sta)
{
	ft_swap(sta);
	return (1);
}

int	ft_sort_three(t_stack **sta)
{
	int	highest_index;

	highest_index = get_highest_index(*sta);
	if ((*sta)->index == highest_index)
		ft_rotate(sta);
	else if ((*sta)->next->index == highest_index)
		ft_rrotate(sta);
	if ((*sta)->index > (*sta)->next->index)
		ft_swap(sta);
	return (1);
}

int	ft_sort(t_stack **sta, t_stack **stb)
{
	ft_push_all_ex3(sta, stb);
	ft_sort_three(sta);
	// ft_pb_all_ex3(sta, stb);
	// t_stack	*tmp;

	// tmp = (*sta);
	// int	median;

	// median = ft_lstsize((*sta)) / 2;
	// while (tmp)
	// {

	// 	tmp = tmp->next;
	// }
	return (1);
}

t_bool	ft_stack_is_sorted(t_stack *sta)
{
	t_stack	*next;

	next = sta->next;
	while (sta && next)
	{
		if (sta->value > next->value)
			return (false);
		sta = sta->next;
		next = next->next;
	}
	return (true);
}
