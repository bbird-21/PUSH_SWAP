/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:31:41 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/17 20:13:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS__H
#define __UTILS__H


#include <stdio.h> // TO REMOVE

#include "tools.h"

long	ft_atoi(const char *str);
int		ft_putchar_fd(char c);
int		ft_putstr_fd(char *str, int fd);
t_bool	ft_strcmp(const char *s1, const char *s2);
int		ft_isdigit(int c);

#endif

