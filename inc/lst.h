/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:09:01 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/19 19:52:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LST__H
#define __LST__H


#include <stdio.h> // TO REMOVE
#include <stdlib.h>
#include "tools.h"

void	ft_lstprint_all(t_stack	*sta, t_stack *stb);
void	ft_lstpush(t_stack **lst, int value, int pos);
int		ft_lstlenght(t_stack *st);
void	ft_lstprint_one(t_stack *st);

#endif
