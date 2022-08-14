/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:49:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 17:07:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PARSE_STD_INPUT
#define __PARSE_STD_INPUT

#include "tools.h"

t_error	get_instruction(t_stack **sta, t_stack **stb);
t_error	do_instruction(t_stack **sta, t_stack **stb, char *instruction);

#endif
