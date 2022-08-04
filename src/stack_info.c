/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:31:23 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/04 18:09:48 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>

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
ww	return (pos_lowest_index);
}
