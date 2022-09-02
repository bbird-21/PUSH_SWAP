/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_std_input.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:49:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 15:44:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_STD_INPUT_H
# define PARSE_STD_INPUT_H

# include "tools.h"

t_error	get_instruction(t_stack **sta, t_stack **stb);
t_error	do_instruction(t_stack **sta, t_stack **stb, char *instruction);
t_bool	is_instruction(char *instruction);

#endif