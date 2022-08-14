/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:49:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/13 15:29:25 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DO_MOVE__H
#define __DO_MOVE__H

#include "tools.h"

void	do_whole_rotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	do_whole_rrotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	do_rotate(t_stack **sta, t_stack **stb, t_cost *cost);
void	do_rrotate(t_stack **sta, t_stack **stb, t_cost *cost);

#endif
