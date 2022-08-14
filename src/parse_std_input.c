/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:50:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 19:51:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "parse_std_input.h"
#include "utils_checker.h"
#include "do_op.h"
#include "tools.h"
#include <unistd.h>
#include <stdlib.h>
#include "lst.h"

t_error	get_instruction(t_stack **sta, t_stack **stb)
{
	char	*instruction;

	instruction = NULL;
	while ((instruction = get_next_line(STDIN_FILENO)) != NULL)
	{
		if (do_instruction(sta, stb, instruction) == error)
			return (error);
	}
	return (no_error);
}

typedef struct s_instruction_map
{
	char	*instruction;
	t_error	(*pf_process)();
}	t_instruction_map;

const t_instruction_map g_map_instruction[] = {
	{"sa\n", ft_sw}
}

t_error	do_instruction(t_stack **sta, t_stack **stb, char *instruction)
{
	if (!(ft_strcmp(instruction, "sa\n")))
		return (ft_swap(sta, true));
	else if (!(ft_strcmp(instruction, "sb\n")))
		return (ft_swap(stb, true));
	else if (!(ft_strcmp(instruction, "ss\n")))
		return (whole_swap(sta, stb));
	else if (!(ft_strcmp(instruction, "pa\n")))
		return (ft_push(stb, sta, true));
	else if (!(ft_strcmp(instruction, "pb\n")))
		ft_push(sta, stb, true);
	else if (!(ft_strcmp(instruction, "ra\n")))
		return (ft_rotate(sta, true));
	else if (!(ft_strcmp(instruction, "rb\n")))
		return (ft_rotate(stb, true));
	else if (!(ft_strcmp(instruction, "rr\n")))
		return (whole_rotate(sta, stb));
	else if (!(ft_strcmp(instruction, "rra\n")))
		return (ft_rrotate(sta, true));
	else if (!(ft_strcmp(instruction, "rrb\n")))
		return (ft_rrotate(stb, true));
	else if (!(ft_strcmp(instruction, "rrr\n")))
		return (whole_rrotate(sta, stb));
	return (no_error);
}
