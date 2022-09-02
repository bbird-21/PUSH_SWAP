/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:49:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 15:37:21 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_MOVE_H
# define DO_MOVE_H

# include "tools.h"

void	loop_whole_rotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	loop_whole_rrotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	loop_rotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	loop_rrotate(t_stack **sta, t_stack **stb, t_cost *cost);

#endif
