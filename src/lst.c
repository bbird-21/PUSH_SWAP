/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:02:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 15:22:05 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstpush(t_stack **lst, int value)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return ;
	new->value = value;
	new->next = *lst;
	new->index = 0;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	*lst = new;
}

int	ft_lstsize(t_stack *st)
{
	int	lenght;

	lenght = 0;
	while (st)
	{
		st = st->next;
		lenght++;
	}
	return (lenght);
}

t_bool	ft_is_sta(t_stack **sta, t_bool reset_sta)
{
	static t_stack	**sta_glob = 0;

	if (sta_glob == 0 || reset_sta)
		sta_glob = sta;
	if (sta_glob == sta)
		return (true);
	return (false);
}
