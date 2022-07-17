/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:01:13 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/17 19:08:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PUSH__SWAP__H
#define __PUSH_SWAP__H

#include "lst.h"

/* CREATING A FUNTION POINTER */
typedef int(*t_pf)(t_stack **sta, t_stack **stb);

t_pf	ft_parse_args(int argc);
void	ft_fillstack(int argc, char **argv, t_stack **sta);

#endif
