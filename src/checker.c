/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:40:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/26 17:34:37 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "lst.h"
#include "error.h"
#include "tools.h"
#include "get_next_line.h"
#include "parse_std_input.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

t_bool	ft_stack_is_sorted(t_stack *sta)
{
	while (sta->next)
	{
		if (sta->value > sta->next->value)
			return (false);
		sta = sta->next;
	}
	return (true);
}

void	free_stack(t_stack **sta, t_stack **stb)
{
	t_stack	*tmp;

	tmp = *sta;
	while (*sta)
	{
		tmp = tmp->next;
		free(*sta);
		*sta = tmp;
	}
	*sta = NULL;
	tmp = *stb;
	while (*stb)
	{
		tmp = tmp->next;
		free(*stb);
		*stb = tmp;
	}
	*stb = NULL;
}

t_bool	ft_fillstack(char **argv, t_stack **sta, int argc)
{
	while (argc--)
		ft_lstpush(sta, ft_atoi(argv[argc]));
	return (false);
}

int	exit_error(t_stack **sta, t_stack **stb)
{
	free_stack(sta, stb);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	t_stack	*sta;
	t_stack	*stb;

	sta = NULL;
	stb = NULL;
	if (argc < 2)
		return (-1);
	if (!(ft_checkargs(argv + 1)))
		return (ft_putstr_fd("Error\n", STDERR_FILENO));
	if (ft_fillstack(argv + 1, &sta, argc - 1))
	{
		free_stack(&sta, &stb);
		return (free_stack(&sta, &stb), 1);
	}
	if (get_instruction(&sta, &stb) == error)
		return (exit_error(&sta, &stb));
	if (ft_stack_is_sorted(sta) && !ft_lstsize(stb))
		ft_putstr_fd("OK\n", STDOUT_FILENO);
	else
		ft_putstr_fd("KO\n", STDOUT_FILENO);
	free_stack(&sta, &stb);
}
