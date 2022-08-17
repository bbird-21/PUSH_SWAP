/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:45:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/17 21:45:56 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STRUCTS__H
# define __STRUCTS__H

/* GNU Make requires this constant to be declared here for displaying
   instructions.  */

/* <parse_std_input.c> requires this constant to be declared here.
   This corresponds to the size of the double array.  */
#define NUMBER_STRING 12
#define MAX_STRING_SIZE 5

/* To prevent integer overflow in expression of type ‘int’  */
#define INT_OVERFLOW 2147483648
/* Definition of the booleen type.  */
typedef enum {false, true} t_bool;

/* Definition of error signal  */
typedef enum {error, no_error} t_error;

/*
typedef enum e_error_signal
{
	error,
	no_error
}	t_error_signal;

typedef struct s_error_message
{
	t_error_signal	signal;
	char			*message;
}	t_error_message;


typedef	union	u_error
{
				t_error_signal		signal;
				t_error_message		message;
}				t_error ;
*/

/* Push_swap program requires this structure to manipule data stack.  */
typedef struct		s_stack
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
typedef struct		s_cost
{
	int				cost_a;
	int				cost_b;
}					t_cost;

/* Checker program requires this
typedef struct	s_instruction
{
	char		*sa;
	char		*sb;
	char		*ss;
	char		*pa;
	char		*pb;
	char		*ra;
	char		*rb;
	char		*rr;
	char		*rra;
	char		*rrb;
	char		*rrr;
}				t_insctruction;
*/
#endif
