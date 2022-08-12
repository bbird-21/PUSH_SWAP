/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:25:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/12 15:19:59 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "utils.h"
#include "tools.h"

void	ft_rotate_ab(t_stack **sta, t_stack **stb)
{
	ft_rotate(sta, true);
	ft_rotate(stb, true);
	ft_putstr("rr\n");
}

void	ft_rrotate_ab(t_stack **sta, t_stack **stb)
{
	ft_rrotate(sta, true);
	ft_rrotate(stb, true);
	ft_putstr("rrr\n");
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
