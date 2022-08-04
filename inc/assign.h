/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:10:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/03 15:56:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASSIGN__H
#define __ASSIGN__H

// void	ft_assign_index(t_stack *sta, int index);

// void	ft_assign_index(t_stack *sta);
#include "tools.h"

void	set_pos(t_stack *sta, t_stack *stb);
void	set_index(t_stack *sta, int index);
void	set_target_pos(t_stack *sta, t_stack *stb);

#endif
