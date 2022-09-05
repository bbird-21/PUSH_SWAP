/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:06:59 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/14 20:39:50 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include "tools.h"

/* ACTION MOVEMENT */
t_error	do_swap(t_stack **sta, t_stack **stb);
t_error	do_push(t_stack **src, t_stack **dest);
t_error	do_rotate(t_stack **sta, t_stack **stb);
t_error	do_rrotate(t_stack **sta, t_stack **stb);

/* CONFIG MOVEMENT */
t_error	swap(t_stack **data);
t_error	push(t_stack **src, t_stack **dest);
t_error	rotate(t_stack **st);
t_error	rrotate(t_stack **st);

int		abs(int x);

#endif
