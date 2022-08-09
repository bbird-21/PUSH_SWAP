/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:25:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/09 15:54:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "utils.h"

int	for_whole_rotate(t_stack **st)
{
	t_stack	*last;
	t_stack	*second;

	second = (*st)->next;
	last = *st;
	if (!*st)
		return (1);
	while (last->next)
		last = last->next;
	last->next = (*st);
	(*st)->next = NULL;
	(*st) = second;
	if (ft_is_sta(st))
		ft_putstr("ra\n");
	else
		ft_putstr("rb\n");
	return (1);
}

int	for_whole_rrotate(t_stack **st)
{
	t_stack	*last;
	t_stack	*before_last;

	last = (*st);
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	last->next = (*st);
	before_last->next = NULL;
	(*st) = last;
	return (1);
}

void	ft_rotate_ab(t_stack **sta, t_stack **stb)
{
	for_whole_rotate(sta);
	for_whole_rotate(stb);
	ft_putstr("rr\n");
}

void	ft_rrotate_ab(t_stack **sta, t_stack **stb)
{
	for_whole_rrotate(sta);
	for_whole_rrotate(stb);
	ft_putstr("rrr\n");
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
