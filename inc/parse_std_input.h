/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:49:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/10/09 14:13:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_STD_INPUT_H
# define PARSE_STD_INPUT_H

# include <stdint.h>
# include "tools.h"
# include "do_op_checker.h"

# define USE_STACK_A   0
# define USE_STACK_B   1
# define USE_STACK_ALL 2

typedef t_error		(*t_pf_op)(t_stack**, t_stack**);

typedef enum e_params
{
	STA,
	STB,
	STA_STB,
	STB_STA
}	t_params;

typedef struct s_op
{
	const char		*instruction;
	t_pf_op			do_op;
	t_params		params;
}					t_op;

static t_op const	g_storage[] = {
{"sa\n", do_swap_checker, STA},
{"sb\n", do_swap_checker, STB},
{"ss\n", do_swap_checker, STA_STB},
{"pa\n", do_push_checker, STB_STA},
{"pb\n", do_push_checker, STA_STB},
{"ra\n", do_rotate_checker, STA},
{"rb\n", do_rotate_checker, STB},
{"rr\n", do_rotate_checker, STA_STB},
{"rra\n", do_rrotate_checker, STA},
{"rrb\n", do_rrotate_checker, STB},
{"rrr\n", do_rrotate_checker, STA_STB},
{0},
};

t_error	get_instruction(t_stack **sta, t_stack **stb);
void	do_instruction(t_stack **sta, t_stack **stb, char *instruction);
t_bool	is_instruction(char *instruction);
t_op	*operation_storage(t_stack **sta, t_stack **stb);

#endif