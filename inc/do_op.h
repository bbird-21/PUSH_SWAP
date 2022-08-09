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

int		ft_swap(t_stack **st);
int		ft_push(t_stack **src, t_stack **dest);
int		ft_rotate(t_stack **st);
int		ft_rrotate(t_stack **st);
void	ft_rotate_ab(t_stack **sta, t_stack **stb);
void	ft_rrotate_ab(t_stack **sta, t_stack **stb);
int		for_whole_rotate(t_stack **st);
int		for_whole_rrotate(t_stack **st);
int		abs(int x);

#endif
