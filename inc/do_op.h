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

t_error	ft_swap(t_stack **st, t_bool both);
t_error	ft_push(t_stack **src, t_stack **dest, t_bool both);
t_error	ft_rotate(t_stack **st, t_bool both);
t_error	ft_rrotate(t_stack **st, t_bool both);
t_error	whole_rotate(t_stack **sta, t_stack **stb);
t_error	whole_rrotate(t_stack **sta, t_stack **stb);
t_error	whole_swap(t_stack **sta, t_stack **stb);
int		abs(int x);

#endif
