/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:36:54 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/17 20:11:40 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "error.h"

// t_bool	ft_checkargs(int argc, char **argv)
// {
// 	int	i;
// 	int	j;

// 	while (--argc)
// 	{
// 		i = 0;
// 		j = 1;
// 		while (argv[argc][i])
// 		{
// 			if (argv[argc][i] < 48 || argv[argc][i] > 57)
// 				if (argv[argc][i] != 45)
// 					return (false);
// 			i++;
// 		}
// 		while (j < argc)
// 		{
// 			if (ft_strcmp(argv[argc], argv[j]))
// 				return (false);
// 			j++;
// 		}
// 	}
// 	return (true);
// }

t_bool	ft_allowed_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
			i++;
		if (!(ft_isdigit(str[i])))
			return (false);
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
		*argv++;
	}
	return (true);
}

t_bool	ft_checkargs(int argc, char **argv)
{
	int	i;
	int	j;
	(void)argc;
	while (*argv)
	{
		if (!(ft_allowed_string(*argv)))
			return (false);
		if (!(ft_duplicate_string(argv + 1, *argv)))
			return (false);
		// printf("argv : %s\n", *argv);
		*argv++;
	}
	return (true);
}