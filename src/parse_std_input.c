/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:50:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/10/09 14:13:19 by mmeguedm         ###   ########.fr       */
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

	instruction = get_next_line(STDIN_FILENO, sta, stb);
	while (instruction != NULL)
	{
		if (*instruction == '\0')
			return (free(instruction), no_error);
		do_instruction(sta, stb, instruction);
		free(instruction);
		instruction = get_next_line(STDIN_FILENO, sta, stb);
	}
	return (no_error);
}

void	do_instruction(t_stack **sta, t_stack **stb, char *instruction)
{
	unsigned int	index;

	index = 0;
	while (g_storage[index].instruction != NULL)
	{
		if (!(ft_strcmp(instruction, g_storage[index].instruction)))
		{
			if (g_storage[index].params == STA_STB)
				g_storage[index].do_op(sta, stb);
			else if (g_storage[index].params == STB_STA)
				g_storage[index].do_op(stb, sta);
			else if (g_storage[index].params == STA)
				g_storage[index].do_op(sta, NULL);
			else if (g_storage[index].params == STB)
				g_storage[index].do_op(NULL, stb);
		}
		index++;
	}
}

t_bool	is_instruction(char *instruction)
{
	int			i;
	const char	instruction_arr[NUMBER_STRING][MAX_STRING_SIZE] = {"rr\n",
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
		"rrr\n",
	};

	i = 0;
	if (!instruction)
		return (false);
	while (++i < NUMBER_STRING)
	{
		if (!(ft_strcmp(instruction_arr[i], instruction)))
			return (true);
	}
	return (false);
}
