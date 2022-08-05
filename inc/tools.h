/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:45:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 17:17:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STRUCTS__H
#define __STRUCTS__H

#define HIGHEST_INDEX 3

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

/* STRUCTURE TO GET COST MOVE */
typedef struct		s_cost
{
	int				cost_a;
	int				cost_b;
}					t_cost;

#endif
