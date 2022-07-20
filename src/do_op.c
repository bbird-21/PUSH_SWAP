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

t_bool	ft_is_sta(t_stack **sta)
{
	static t_stack **sta_glob = 0;

	if (sta_glob == 0)
		sta_glob = sta;
	if (sta_glob == sta)
		return (true);
	return (false);
}

void	ft_swap(t_stack **st)
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
}

void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_b = (*src)->next;
	tmp_a = *src;
	if (!*dest || !*src)
		return ;
	(*src)->next = *dest; // NEXT POINTE VERS LE SOMMET DE LA PILE A
	*src = tmp_b; // LE POINTEUR IDENTIFIANT LA PILE B POINTE MAINTENANT VERS LE NOUVEAU PREMIER
	*dest = tmp_a;  // LE POINTEUR IDENTIFIANT LA PILE A POINTE MAINTENANT VERS LE NOUVEAU PREMIER
	if (ft_is_sta(dest))
		ft_putstr("pa\n");
	else
		ft_putstr("pb\n");}

void	ft_rotate(t_stack **st)
{
	t_stack	*last;
	t_stack	*second;

	second = (*st)->next;
	last = *st;
	if (!*st)
		return ;
	while (last->next)
		last = last->next;
	last->next = (*st);
	(*st)->next = NULL;
	(*st) = second;
	if (ft_is_sta(st))
		ft_putstr("ra\n");
	else
		ft_putstr("rb\n");
}

void	ft_rrotate(t_stack **st)
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

}
