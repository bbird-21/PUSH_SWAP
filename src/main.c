/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/12 15:11:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "tools.h"
#include "do_op.h"
#include "utils.h"
#include "sort_algo.h"
#include "assign.h"
#include "error.h"

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
	set_index(*sta, 1);
	ft_is_sta(sta);
	if (ft_stack_is_sorted(*sta))
		return (true);
	return (false);
}

void	ft_push_swap(int argc, t_stack **sta, t_stack **stb)
{
	if (argc == 2)
		ft_swap(sta, false);
	else if (argc == 3)
		ft_sort_three(sta);
	else
		ft_sort(sta, stb);
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
	ft_push_swap(argc - 1, &sta, &stb);
	free_stack(&sta, &stb);
}
