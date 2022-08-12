/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:40:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/12 14:50:45 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "error.h"
#include "tools.h"
#include "get_next_line.h"
#include "parse_std_input.h"
#include <unistd.h>

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
	if (ft_stack_is_sorted(*sta))
		return (true);
	return (false);
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
	while (*argv)
	{
		printf("argv : %s\n", *argv);
		argv++;
	}
	free_stack(&sta, &stb);
	get_instruction(&sta, &stb);
}
