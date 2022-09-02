/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:53:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 15:46:04 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_ALGO_H
# define SORT_ALGO_H

# include "lst.h"
# include "utils.h"

void	ft_sort_two(t_stack **sta);
void	ft_sort_three(t_stack **sta);
void	ft_sort(t_stack **sta, t_stack **stb);
t_bool	ft_stack_is_sorted(t_stack *sta);

#endif
