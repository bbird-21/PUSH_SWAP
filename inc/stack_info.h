/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:31:40 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 15:37:21 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_INFO_H
# define STACK_INFO_H

# include "tools.h"

int		get_highest_index(t_stack *st);
int		get_pos_lowest_index(t_stack *st);
void	set_cost(t_stack *sta, t_stack *stb);
void	get_cheapest(t_stack *st, t_cost *cost);

#endif
