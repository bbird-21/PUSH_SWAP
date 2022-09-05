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
#include <unistd.h>

t_error	do_swap(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!swap(sta))
			return (error);
		if (!(swap(stb)))
			return (error);
		ft_putstr_fd("ss\n", STDOUT_FILENO);
	}
	else if (sta)
	{
		if (!swap(sta))
			return (error);
		ft_putstr_fd("sa\n", STDOUT_FILENO);
	}
	else if (stb)
	{
		if (!swap(stb))
			return (error);
		ft_putstr_fd("sb\n", STDOUT_FILENO);
	}
	return (no_error);
}

t_error	do_push(t_stack **src, t_stack **dest)
{
	if (ft_is_sta(dest, false))
		ft_putstr_fd("pa\n", STDOUT_FILENO);
	if (!ft_is_sta(dest, false))
		ft_putstr_fd("pb\n", STDOUT_FILENO);
	if (!(push(src, dest)))
		return (error);
	return (no_error);
}

t_error	do_rotate(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!(rotate(sta)))
			return (error);
		if (!(rotate(stb)))
			return (error);
		ft_putstr_fd("rr\n", STDOUT_FILENO);
	}
	else if (sta)
	{
		if (!(rotate(sta)))
			return (error);
		ft_putstr_fd("ra\n", STDOUT_FILENO);
	}
	else if (stb)
	{
		if (!(rotate(stb)))
			return (error);
		ft_putstr_fd("rb\n", STDOUT_FILENO);
	}
	return (no_error);
}

t_error	do_rrotate(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!(rrotate(sta)))
			return (error);
		if (!(rrotate(stb)))
			return (error);
		ft_putstr_fd("rrr\n", STDOUT_FILENO);
	}
	else if (sta)
	{
		if (!(rrotate(sta)))
			return (error);
		ft_putstr_fd("rra\n", STDOUT_FILENO);
	}
	else if (stb)
	{
		if (!(rrotate(stb)))
			return (error);
		ft_putstr_fd("rrb\n", STDOUT_FILENO);
	}
	return (no_error);
}
