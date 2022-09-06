/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:05:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/06 11:48:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "utils.h"
#include "tools.h"
#include <unistd.h>

t_error	do_swap_checker(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!swap(sta))
			return (error);
		if (!(swap(stb)))
			return (error);
	}
	else if (sta)
	{
		if (!swap(sta))
			return (error);
	}
	else if (stb)
	{
		if (!swap(stb))
			return (error);
	}
	return (no_error);
}

t_error	do_push_checker(t_stack **src, t_stack **dest)
{
	if (!(push(src, dest)))
		return (error);
	return (no_error);
}

t_error	do_rotate_checker(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!(rotate(sta)))
			return (error);
		if (!(rotate(stb)))
			return (error);
	}
	else if (sta)
	{
		if (!(rotate(sta)))
			return (error);
	}
	else if (stb)
	{
		if (!(rotate(stb)))
			return (error);
	}
	return (no_error);
}

t_error	do_rrotate_checker(t_stack **sta, t_stack **stb)
{
	if (sta && stb)
	{
		if (!(rrotate(sta)))
			return (error);
		if (!(rrotate(stb)))
			return (error);
	}
	else if (sta)
	{
		if (!(rrotate(sta)))
			return (error);
	}
	else if (stb)
	{
		if (!(rrotate(stb)))
			return (error);
	}
	return (no_error);
}
