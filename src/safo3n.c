/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safo3n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:37:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/04 18:13:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "lst.h"
#include "do_op.h"

void	ft_push_all_ex3(t_stack **sta, t_stack **stb)
{
	int	pushed;
	int	stack_size;

	pushed = 0;
	stack_size = ft_lstsize(*sta);
	while (stack_size > 6 && pushed < stack_size / 2)
	{
		if ((*sta)->index <= stack_size / 2)
			pushed += ft_push(sta, stb);
		else
			ft_rotate(sta);
	}
	while (stack_size - pushed > 3)
		pushed += ft_push(sta, stb);
}

