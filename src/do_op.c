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

#include "do_op.h"
#include "lst.h"
#include "utils.h"
#include "tools.h"
#include <stdio.h>


t_error	do_swap(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!swap(sta) || !swap(stb))
			return (error);
		ft_putstr("ss\n");
	}
	else if (sta)
	{
		if (!swap(sta))
			return (error);
		ft_putstr("sa\n");
	}
	else if (stb)
	{
		if (!swap(stb))
			return (error);
		ft_putstr("sb\n");
	}
	return (no_error);
}


t_error	do_push(t_stack **src, t_stack **dest)
{
	if (ft_is_sta(dest, false))
		ft_putstr("pa\n");
	if (!ft_is_sta(dest, false))
		ft_putstr("pb\n");
	return (push(src, dest));
}



t_error	do_rotate(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		rotate(sta);
		rotate(stb);
		ft_putstr("rr\n");
	}
	else if (sta)
	{
		rotate(sta);
		ft_putstr("ra\n");
	}
	else if (stb)
	{
		rotate(stb);
		ft_putstr("rb\n");
	}
	return (no_error);
}



t_error	do_rrotate(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		rrotate(sta);
		rrotate(stb);
		ft_putstr("rrr\n");
	}
	else if (sta)
	{
		rrotate(sta);
		ft_putstr("rra\n");
	}
	else if (stb)
	{
		rrotate(stb);
		ft_putstr("rrb\n");
	}
	return (no_error);
}
