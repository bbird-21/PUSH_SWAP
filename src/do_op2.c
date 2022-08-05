/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:25:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 17:11:49 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"

void	ft_rotate_ab(t_stack **sta, t_stack **stb)
{
	ft_rotate(sta);
	ft_rotate(stb);
}

void	ft_rrotate_ab(t_stack **sta, t_stack **stb)
{
	ft_rrotate(sta);
	ft_rrotate(stb);
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
