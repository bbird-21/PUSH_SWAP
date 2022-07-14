/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:31:41 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/14 15:46:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __UTILS__H
#define __UTILS__H


typedef enum {false, true} t_bool;

int	ft_atoi(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
t_bool	ft_checkargs(int argc, char **argv);
t_bool	ft_strcmp(char *s1, char *s2);

#endif

