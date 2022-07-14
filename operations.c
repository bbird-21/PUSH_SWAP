/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:10:46 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/13 14:54:34 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "lst.h"
#include "basics.h"
#include "operations.h"
#include "utils.h"

void	ft_swap(t_stack **st, char *op)
{
	t_stack	*cst;
	t_stack	*tmp;

	tmp = *st;
	cst = *st;
	tmp = tmp->next;
	cst->next = tmp->next;
	tmp->next = cst;
	*st = tmp;
	ft_putstr(op);
}

void	ft_push(t_stack **dest, t_stack **src, char *op)
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
	ft_putstr(op);
}

void	ft_rotate(t_stack **st, char *op)
{
	t_stack	*last;
	t_stack	*before_last;

	last = *st;
	if (!*st)
		return ;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	last->next = (*st)->next; // LE DERNIER ELEMENT POINTE VERS LE DEUXIEME ELEMENT
	before_last->next = (*st); //L AVANT DERNIER ELEMENT POINT VERS LE PREMIER
	(*st)->next = NULL; // LE PREMIER ELEMENT POINTE VERS NULL
	(*st) = last;
	ft_putstr(op);
}
