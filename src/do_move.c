/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:48:39 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 18:52:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "do_op.h"
#include <stdio.h> // TO REMOVE

void	whole_rotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a > 0 && cost->cost_b > 0)
	{
		ft_rotate_ab(sta, stb);
		cost->cost_a--;
		cost->cost_b--;
	}
}

void	whole_rrotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a < 0 && cost->cost_b < 0)
	{
		ft_rrotate_ab(sta, stb);
		cost->cost_a++;
		cost->cost_b++;
	}
}

void	do_rotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a > 0)
	{
		ft_rotate(sta);
		printf("test");
		cost->cost_a--;
	}
	while (cost->cost_b > 0)
	{
		ft_rotate(stb);
		cost->cost_b--;
	}
}

void	do_rrotate(t_stack **sta, t_stack **stb, t_cost *cost)
{
	while (cost->cost_a < 0)
	{
		ft_rrotate(sta);
		cost->cost_a++;
	}
	while (cost->cost_b < 0)
	{
		ft_rrotate(stb);
		cost->cost_b++;
	}
}
