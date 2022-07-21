/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safo3n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/21 17:36:58 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "lst.h"
#include "do_op.h"

void	ft_push_to_stb(t_stack **sta)
{
	t_stack	*tmp;

	tmp = (*sta);
	int	median;

	median = ft_lstsize((*sta)) / 2;
	while (tmp)
	{
		if (tmp->index < median)
			ft_push(&sta, &stb);
		tmp = tmp->next;
	}
}