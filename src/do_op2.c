/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:25:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 17:13:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "utils.h"
#include "tools.h"

t_error	whole_rotate(t_stack **sta, t_stack **stb)
{
	int	error;

	error = ft_rotate(sta, true);
	if (!error)
		return (error);
	error = ft_rotate(stb, true);
	ft_putstr("rr\n");
	return (error);
}

t_error	whole_rrotate(t_stack **sta, t_stack **stb)
{
	int	error;

	error = ft_rrotate(sta, true);
	if (!error)
		return (error);
	error = ft_rrotate(stb, true);
	ft_putstr("rrr\n");
	return (error);
}

t_error	whole_swap(t_stack **sta, t_stack **stb)
{
	int	error;

	error = ft_swap(sta, true);
	if (!error)
		return (error);
	ft_swap(stb, true);
	ft_putstr("ss\n");
	return (error);
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
