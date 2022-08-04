/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:31:41 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/03 16:06:49 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS__H
#define __UTILS__H


#include <stdio.h> // TO REMOVE

#include "tools.h"

int	ft_atoi(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
t_bool	ft_strcmp(char *s1, char *s2);
int		ft_isdigit(int c);

#endif

