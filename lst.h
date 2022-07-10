/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:09:01 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/09 21:20:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LST__H
#define __LST__H

#include <stdlib.h>

typedef struct		s_stack
{
	int				value;
	int				pos;
	int				index;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_list	*next;
}					t_stack;

t_stack	*ft_lstnew(int value);
void	ft_lstadd_front(t_stack **lst, t_stack *element);
void	ft_lstprint(t_stack	**lst, t_stack *element);

#define __LST__H
