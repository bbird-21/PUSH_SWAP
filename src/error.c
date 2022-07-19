/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:36:54 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/19 19:59:40 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "utils.h"

t_bool	ft_allowed_string(char *str)
{
	int	i;

	i = 0;
	if (*str == 0)
		return (false);
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (!(ft_isdigit(str[i])))
		{
			printf("str : %c\n", *str);
			return (false);
		}
		i++;
	}
	return (true);
}

t_bool	ft_duplicate_string(char **argv, char *str)
{
	while (*argv)
	{
		if (!(ft_strcmp(*argv, str)))
			return (false);
		argv++;
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
		if (!(ft_duplicate_string(argv + 1, argv[i])))
			return (false);
		argv++;
	}
	return (true);
}
