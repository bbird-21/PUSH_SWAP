/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:50:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/17 21:42:41 by mmeguedm         ###   ########.fr       */
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
		if (!(is_instruction(instruction)))
		{
			free(instruction);
			return (error);
		}
		if (do_instruction(sta, stb, instruction) == error)
		{
			free(instruction);
			return (error);
		}
		free(instruction);
	}
	return (no_error);
}

t_error	do_instruction(t_stack **sta, t_stack **stb, char *instruction)
{

	if (!(ft_strcmp(instruction, "sa\n")))
		return (do_swap(sta, NULL));
	else if (!(ft_strcmp(instruction, "sb\n")))
		return (do_swap(NULL, stb));
	else if (!(ft_strcmp(instruction, "ss\n")))
		return (do_swap(sta, stb));

	else if (!(ft_strcmp(instruction, "pa\n")))
		return (do_push(stb, sta));
	else if (!(ft_strcmp(instruction, "pb\n")))
		do_push(sta, stb);

	else if (!(ft_strcmp(instruction, "ra\n")))
		return (do_rotate(sta, NULL));
	else if (!(ft_strcmp(instruction, "rb\n")))
		return (do_rotate(NULL, stb));
	else if (!(ft_strcmp(instruction, "rr\n")))
		return (do_rotate(sta, stb));

	else if (!(ft_strcmp(instruction, "rra\n")))
		return (do_rrotate(sta, NULL));
	else if (!(ft_strcmp(instruction, "rrb\n")))
		return (do_rrotate(NULL, stb));
	else if (!(ft_strcmp(instruction, "rrr\n")))
		return (do_rrotate(sta, stb));
	return (no_error);
}

t_bool	is_instruction(char *instruction)
{
	int	i;

	i = 0;
	if (!instruction)
		return (false);
	const char instruction_arr[NUMBER_STRING][MAX_STRING_SIZE] = {"rr\n",
		"sa\n",
		"sb\n",
		"ss\n",
		"pa\n",
		"pb\n",
		"ra\n",
		"rb\n",
		"rr\n",
		"rra\n",
		"rrb\n",
		"rrr\n"
	};
	while (++i < NUMBER_STRING)
	{
		if (!(ft_strcmp(instruction_arr[i], instruction)))
			return (true);
	}
	return (false);
}
