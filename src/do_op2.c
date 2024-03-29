/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:25:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/06 13:30:49 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "utils.h"
#include "tools.h"

t_error	swap(t_stack **st)
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
	return (no_error);
}

t_error	push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp_src;

	if (!*src || !src)
		return (error);
	tmp_src = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp_src;
	return (no_error);
}

t_error	rotate(t_stack **st)
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
	return (no_error);
}

t_error	rrotate(t_stack **st)
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
	return (no_error);
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
