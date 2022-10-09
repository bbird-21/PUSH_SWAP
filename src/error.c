/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:36:54 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/10/09 17:08:03 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "lst.h"
#include "utils.h"
#include "limits.h"

t_bool	ft_allowed_string(char *str)
{
	int	i;

	i = 0;
	if (*str == 0)
		return (false);
	if (str[0] == '-')
		i++;
	if (!(ft_isdigit(str[i])))
		return (false);
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
			return (false);
		i++;
	}
	return (true);
}

t_bool	ft_checkargs(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
	{
		if (!(ft_allowed_string(argv[i])))
			return (false);
		if (ft_atoi(argv[i]) == INT_OVERFLOW)
			return (false);
		argv++;
	}
	return (true);
}

t_bool	duplicate_int(t_stack *sta)
{
	t_stack	*tmp;

	while (sta)
	{
		tmp = sta->next;
		while (tmp)
		{
			if (sta->value == tmp->value)
				return (true);
			tmp = tmp->next;
		}
		sta = sta->next;
	}
	return (false);
}
