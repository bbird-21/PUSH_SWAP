/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:38 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/19 19:58:06 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "do_op.h"
#include "utils.h"

int	ft_sort_two(t_stack **sta, t_stack **stb)
{
	(void)**stb;
	ft_swap(sta, "sa\n");
	return (1);
}

// int	ft_sort_three(t_stack **sta, t_stack **stb)
// {
// 	if ((*sta)->index)
// }

int	ft_sort(t_stack **sta, t_stack **stb)
{
	(void)**stb;
	// ft_swap(sta, "sa\n");
	ft_rrotate(sta, "ra\n");
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