/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:10:16 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/07 18:12:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "assign.h"
#include "sort_algo.h"
#include "stack_info.h"

void	set_index(t_stack *sta, int index)
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
		set_index(sta, index + 1);
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

void	set_target_pos(t_stack *sta, t_stack *stb)
{
	t_stack		*tmp_a;
	int			nearest_index;
	int			index_sup;

	while (stb)
	{
		index_sup = 0;
		tmp_a = sta;
		nearest_index = get_highest_index(sta);
		while (tmp_a)
		{
			if ((tmp_a->index - stb->index < nearest_index)
				&& (tmp_a->index > stb->index))
			{
				index_sup = 1;
				stb->target_pos = tmp_a->pos;
				nearest_index = tmp_a->index - stb->index;
			}
			tmp_a = tmp_a->next;
		}
		if (index_sup == 0)
			stb->target_pos = get_pos_lowest_index(sta);
		stb = stb->next;
	}
}
