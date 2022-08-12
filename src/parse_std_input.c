/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:50:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/12 15:23:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "parse_std_input.h"
#include "utils_checker.h"
#include "do_op.h"
#include "tools.h"
#include <unistd.h>
#include <stdlib.h>

void	get_instruction(t_stack **sta, t_stack **stb)
{
	char	*instruction;

	instruction = NULL;
	while ((instruction = get_next_line(STDIN_FILENO)) != NULL)
		do_instruction(sta, stb, instruction);

}

void	do_instruction(t_stack **sta, t_stack **stb, char *instruction)
{
	if (!(ft_strcmp(instruction, "sa\n")))
		ft_swap(sta, false);
	else if (!(ft_strcmp(instruction, "sb\n")))
		ft_swap(stb, false);
	else if (!(ft_strcmp(instruction, "ss\n")))
}
