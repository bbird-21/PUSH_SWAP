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

#ifndef __OPERATIONS__H
#define __OPERATIONS__H

#include "tools.h"

void	ft_swap(t_stack **st);
void	ft_push(t_stack **dest, t_stack **src);
void	ft_rotate(t_stack **st);
void	ft_rrotate(t_stack **st);
t_bool	ft_is_sta(t_stack **sta);

#endif