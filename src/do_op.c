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


#include "lst.h"
#include "utils.h"

int	ft_swap(t_stack **st)
{
	t_stack	*cst;
	t_stack	*tmp;

	tmp = *st;
	cst = *st;
	tmp = tmp->next;
	cst->next = tmp->next;
	tmp->next = cst;
	*st = tmp;
	if (ft_is_sta(st))
		ft_putstr("sa\n");
	else
		ft_putstr("sb\n");
	return (1);
}

int	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp_src;

	if (!*src)
		return (1);
	tmp_src = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp_src;
	if (ft_is_sta(dest))
		ft_putstr("pa\n");
	else
		ft_putstr("pb\n");
	return (1);
}

int	ft_rotate(t_stack **st)
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

int	ft_rrotate(t_stack **st)
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
	if (ft_is_sta(st))
		ft_putstr("rra\n");
	else
		ft_putstr("rrb\n");
	return (1);
}
