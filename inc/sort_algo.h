/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/02 15:58:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SORT__ALGO__H
#define __SORT__ALGO__H

#include "lst.h"
#include "utils.h"

int	ft_sort_two(t_stack **sta, t_stack **stb);
int	ft_sort_three(t_stack **sta);
int	ft_sort(t_stack **sta, t_stack **stb);
t_bool	ft_stack_is_sorted(t_stack *sta);

#endif
