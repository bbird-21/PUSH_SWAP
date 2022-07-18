/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:37:32 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/18 19:20:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ERROR__H
#define __ERROR__H

#include "utils.h"

t_bool	ft_checkargs(char **argv);
t_bool	ft_allowed_string(char *str);
t_bool	ft_duplicate_string(char **argv, char *str);

#endif