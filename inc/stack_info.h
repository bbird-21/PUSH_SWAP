/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:31:40 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 13:30:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __STACK_INFO__H
#define __STACK_INFO__H

#include "tools.h"

int		abs(int x);
int		get_highest_index(t_stack *st);
int		get_pos_lowest_index(t_stack *st);
void	set_stack_cost(t_stack *sta, t_stack *stb);

#endif
