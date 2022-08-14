/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:10:46 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/14 20:39:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "utils.h"
#include "tools.h"
#include <stdio.h>

t_error	ft_swap(t_stack **st, t_bool both)
{
	t_stack	*cst;
	t_stack	*tmp;

	if (!*st || !st || !(*st)->next)
		return (error);
	tmp = *st;
	cst = *st;
	tmp = tmp->next;
	cst->next = tmp->next;
	tmp->next = cst;
	*st = tmp;
	if (ft_is_sta(st, false) && !both)
		ft_putstr("sa\n");
	else if (!(ft_is_sta(st, false)) && !both)
		ft_putstr("sb\n");
	return (no_error);
}

t_error	ft_push(t_stack **src, t_stack **dest, t_bool both)
{
	t_stack	*tmp_src;

	if (!*src || !src)
		return (error);
	tmp_src = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp_src;
	if (ft_is_sta(dest, false) && !both)
		ft_putstr("pa\n");
	else if (!(ft_is_sta(dest, false)) && !both)
		ft_putstr("pb\n");
	return (no_error);
}

t_error	ft_rotate(t_stack **st, t_bool both)
{
	t_stack	*last;
	t_stack	*second;

	if (!*st || !st || !(*st)->next)
		return (error);
	second = (*st)->next;
	last = *st;
	while (last->next)
		last = last->next;
	last->next = (*st);
	(*st)->next = NULL;
	(*st) = second;
	if (ft_is_sta(st, false) && !both)
		ft_putstr("ra\n");
	else if (!(ft_is_sta(st, false)) && !both)
		ft_putstr("rb\n");
	return (no_error);
}

t_error	ft_rrotate(t_stack **st, t_bool both)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*st || !st || !(*st)->next)
		return (error);
	last = (*st);
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	last->next = (*st);
	before_last->next = NULL;
	(*st) = last;
	if (ft_is_sta(st, false) && !both)
		ft_putstr("rra\n");
	else if (!(ft_is_sta(st, false)) && !both)
		ft_putstr("rrb\n");
	return (no_error);
}
