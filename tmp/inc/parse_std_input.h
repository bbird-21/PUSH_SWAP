/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:49:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/06 12:48:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_STD_INPUT_H
# define PARSE_STD_INPUT_H

# include "tools.h"

# define USE_STACK_A   0
# define USE_STACK_B   1
# define USE_STACK_ALL 2

typedef void	(*t_pf_op)(t_stack*, t_stack*);

typedef struct	s_op
{
	const char	*instruction;
	t_pf_op		op;
	int			flags;
}				t_op;


t_error		get_instruction(t_stack **sta, t_stack **stb);
t_error		do_instruction(t_stack **sta, t_stack **stb, char *instruction);
t_bool		is_instruction(char *instruction);
static t_op	*operation_storage(void);


// 	t_op op = storage[1];

// 	void *sta = 1, *stb = 1;
// 	if (op.flags & USE_STACK_A != 0)
// 		stb = NULL;
// 	else if (op.flags & USE_STACK_B != 0)
// 		sta = NULL;

// 	op.operation(sta, stb);

// 	return (storage);
// }

#endif