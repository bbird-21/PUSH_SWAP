/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:09:53 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/26 17:32:58 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_CHECKER_H
# define UTILS_CHECKER_H

# include "utils.h"
# include "tools.h"

char	*ft_strjoin(char *line, char *buffer);
int		ft_strlen(char *str);
char	*ft_strdup(const char *src);
int		exit_error(t_stack **sta, t_stack **stb);
#endif