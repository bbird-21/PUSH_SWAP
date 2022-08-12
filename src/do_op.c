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

void	ft_swap(t_stack **st, t_bool both)
{
	t_stack	*cst;
	t_stack	*tmp;

	tmp = *st;
	cst = *st;
	tmp = tmp->next;
	cst->next = tmp->next;
	tmp->next = cst;
	*st = tmp;
	if (ft_is_sta(st) && !both)
		ft_putstr("sa\n");
	else if (!(ft_is_sta(st)) && !both)
		ft_putstr("sb\n");
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

void	ft_rotate(t_stack **st, t_bool both)
{
	t_stack	*last;
	t_stack	*second;

	if (!*st)
		return ;
	second = (*st)->next;
	last = *st;
	while (last->next)
		last = last->next;
	last->next = (*st);
	(*st)->next = NULL;
	(*st) = second;
	if (ft_is_sta(st) && !both)
		ft_putstr("ra\n");
	else if (!(ft_is_sta(st)) && !both)
		ft_putstr("rb\n");
}

void	ft_rrotate(t_stack **st, t_bool both)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*st)
		return ;
	last = (*st);
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	last->next = (*st);
	before_last->next = NULL;
	(*st) = last;
	if (ft_is_sta(st) && !both)
		ft_putstr("rra\n");
	else if (!(ft_is_sta(st)) && !both)
		ft_putstr("rrb\n");
}
