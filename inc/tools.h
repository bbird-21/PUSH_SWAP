/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:45:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/19 19:52:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STRUCTS__H
#define __STRUCTS__H

typedef enum {false, true} t_bool;

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

/* FUNCTION POINTER ABLE TO RECEIVE SORT ALGO*/

typedef int(*t_pf)(t_stack **sta, t_stack **stb);

#endif