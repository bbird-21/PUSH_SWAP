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

void	ft_swap(t_stack **st, t_bool both);
int		ft_push(t_stack **src, t_stack **dest);
void	ft_rotate(t_stack **st, t_bool both);
void	ft_rrotate(t_stack **st, t_bool both);
void	ft_rotate_ab(t_stack **sta, t_stack **stb);
void	ft_rrotate_ab(t_stack **sta, t_stack **stb);
void	for_whole_rotate(t_stack **st);
void	for_whole_rrotate(t_stack **st);
int		abs(int x);

#endif
