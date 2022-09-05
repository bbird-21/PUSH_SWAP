/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:48:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 23:11:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "do_op.h"
#include "tools.h"
#include <stdlib.h>

void	loop_whole_rotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a > 0 && cost->cost_b > 0)
	{
		do_rotate(sta, stb);
		cost->cost_a--;
		cost->cost_b--;
	}
}

void	loop_whole_rrotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a < 0 && cost->cost_b < 0)
	{
		do_rrotate(sta, stb);
		cost->cost_a++;
		cost->cost_b++;
	}
}

void	loop_rotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a > 0)
	{
		do_rotate(sta, NULL);
		cost->cost_a--;
	}
	while (cost->cost_b > 0)
	{
		do_rotate(NULL, stb);
		cost->cost_b--;
	}
}

void	loop_rrotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a < 0)
	{
		do_rrotate(sta, NULL);
		cost->cost_a++;
	}
	while (cost->cost_b < 0)
	{
		do_rrotate(NULL, stb);
		cost->cost_b++;
	}
}
