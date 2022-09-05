/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:45:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 18:14:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

/* <parse_std_input.c> requires this constant to be declared here.
   This corresponds to the size of the double array.  */
# define NUMBER_STRING 12
# define MAX_STRING_SIZE 5

/* To prevent integer overflow in expression of type ‘int’  */
# define INT_OVERFLOW 2147483648

/* Definition of the booleen type.  */
typedef enum e_bool
{
	false,
	true
}	t_bool;

/* Definition of error signal  */
typedef enum e_error {error, no_error}	t_error;

/* Push_swap program requires this structure to manipule data stack.  */
typedef struct s_stack
{
	int				value;
	int				pos;
	int				index;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}					t_stack;

/* Push_swap program requires this structure for arithmetic operations.  */
typedef struct s_cost
{
	int				cost_a;
	int				cost_b;
}					t_cost;

#endif
