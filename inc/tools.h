/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:45:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 19:51:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STRUCTS__H
#define __STRUCTS__H

typedef enum {false, true} t_bool;
// typedef enum {error, no_error} t_error;

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
}	t_error ;

/* STRUCTURE TO MANIPULE STACK DATA */
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

/* STRUCTURE TO GET COST MOVE */
typedef struct		s_cost
{
	int				cost_a;
	int				cost_b;
}					t_cost;

#endif
