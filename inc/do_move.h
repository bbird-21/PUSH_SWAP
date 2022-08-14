/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:49:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 23:08:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DO_MOVE__H
#define __DO_MOVE__H

#include "tools.h"

void	loop_whole_rotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	loop_whole_rrotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	loop_rotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	loop_rrotate(t_stack **sta, t_stack **stb, t_cost *cost);

#endif
