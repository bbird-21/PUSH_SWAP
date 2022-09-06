/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:29:13 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/06 14:18:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_CHECKER_H
# define DO_OP_CHECKER_H

# include "tools.h"

/* ACTION MOVEMENT */

t_error	do_swap_checker(t_stack **sta, t_stack **stb);
t_error	do_push_checker(t_stack **src, t_stack **dest);
t_error	do_rotate_checker(t_stack **sta, t_stack **stb);
t_error	do_rrotate_checker(t_stack **sta, t_stack **stb);

#endif