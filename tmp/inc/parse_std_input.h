/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:49:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/05 17:20:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_STD_INPUT_H
# define PARSE_STD_INPUT_H

# include "tools.h"

t_error	get_instruction(t_stack **sta, t_stack **stb);
t_error	do_instruction(t_stack **sta, t_stack **stb, char *instruction);
t_bool	is_instruction(char *instruction);
static t_op	*operation_storage(void);


typedef struct	s_op
{
	const char	*name;
	void		(*operation)(t_stack*, t_stack*);
	int			flags;
}				t_op;

# define USE_STACK_A   0b0000001
# define USE_STACK_B   0b0000010
# define USE_STACK_ALL 0

static t_op
	*operation_storage(void)
{
	static t_op storage[] = {
		{ "sa", do_swap, USE_STACK_A },
		{ "sb", do_swap, USE_STACK_B },
		{ "ss", do_swap, USE_STACK_ALL },
		{ "pa", do_push },
		{ "pb", do_push },
		{ "ra", op_rotate_a },
		{ "rb", op_rotate_b },
		{ "rr", op_rotate_x },
		{ "rra", op_reverse_rotate_a },
		{ "rrb", op_reverse_rotate_b },
		{ "rrr", op_reverse_rotate_x },
		{ NULL, NULL },
	};


	t_op op = storage[1];

	void *sta = 1, *stb = 1;
	if (op.flags & USE_STACK_A != 0)
		stb = NULL;
	else if (op.flags & USE_STACK_B != 0)
		sta = NULL;

	op.operation(sta, stb);

	return (storage);
}

#endif