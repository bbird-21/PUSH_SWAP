/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/02 16:03:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "safo3n.h"
#include "lst.h"
#include "do_op.h"
#include "utils.h"

int	ft_sort_two(t_stack **sta, t_stack **stb)
{
	(void)**stb;
	ft_swap(sta);
	return (1);
}

int	ft_sort_three(t_stack **sta)
{
	t_stack	*second;

	second  = (*sta)->next;
	if ((*sta)->index == HIGHEST_INDEX)
		ft_rotate(sta);
	else if (second->index == HIGHEST_INDEX)
		ft_rrotate(sta);
	second  = (*sta)->next;
	if ((*sta)->index > second->index)
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
