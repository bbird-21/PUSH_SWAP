/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:40:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 23:38:12 by mmeguedm         ###   ########.fr       */
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

	if (!sta || !(*sta))
		return ;
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
	ft_is_sta(sta, true);
	if (ft_stack_is_sorted(*sta))
		return (true);
	return (false);
}

int	exit_error(t_stack **sta, t_stack **stb)
{
	ft_putstr("An error has occurred. Arguments are the same?\n");
	free_stack(sta, stb);
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
		return (ft_putstr("Error\n"));
	if (ft_fillstack(argv + 1, &sta, argc - 1))
		return (free_stack(&sta, &stb), 1);
	if (get_instruction(&sta, &stb) == error)
		return (exit_error(&sta, &stb));
	if (ft_stack_is_sorted(sta) && !ft_lstsize(stb))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	free_stack(&sta, &stb);
}
