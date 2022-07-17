/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:31:41 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/17 18:54:35 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS__H
#define __UTILS__H


#include <stdlib.h>
#include <stdio.h> // TO REMOVE
#include <unistd.h>


typedef enum {false, true} t_bool;

int	ft_atoi(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
t_bool	ft_strcmp(char *s1, char *s2);
int		ft_isdigit(int c);

#endif

