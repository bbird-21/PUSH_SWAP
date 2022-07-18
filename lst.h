/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:09:01 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/18 18:43:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LST__H
#define __LST__H

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

typedef int(*t_pf)(t_stack **sta, t_stack **stb);

#include <stdio.h> // TO REMOVE
#include <stdlib.h>
#include "lst.h"
#include "do_op.h"
#include "sort_algo.h"
#include "assign.h"
#include "error.h"
#include "utils.h"


void	ft_lstprint_all(t_stack	*sta, t_stack *stb);
void	ft_lstpush(t_stack **lst, int value, int pos);
int		ft_lstlenght(t_stack *st);
void	ft_lstprint_one(t_stack *st);

#endif
