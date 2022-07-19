/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/19 19:57:53 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "tools.h"
#include "do_op.h"
#include "utils.h"
#include "sort_algo.h"
#include "assign.h"
#include "error.h"

void	ft_fillstack(char **argv, t_stack **sta, int argc)
{
	int	value;
	int	pos;

	pos = 1;
	value = 0;
	while (argc--)
	{
		value = ft_atoi(argv[argc]);
		ft_lstpush(sta, value, pos);
		pos++;
	}
	ft_assign_index(*sta, 1);
}

t_pf	ft_parse_args(int argc)
{
	t_pf	*table;

	table = (t_pf[5]){
		NULL,
	[2] = ft_sort_two,
	// [3] = ft_sort_three,
	[4] = ft_sort
	};
	if (argc > 3)
		return (table[4]);
	return (table[argc]);
}

int	main(int argc, char **argv)
{

	t_stack	*sta;
	t_stack	*stb;
	t_pf	sort_algo;

	sta = NULL;
	stb = NULL;

	if (argc > 1 && !(ft_checkargs(argv + 1)))
		return (ft_putstr("Error\n"));
	ft_fillstack(argv + 1, &sta, argc - 1);
	if (ft_stack_is_sorted(sta))
		return (1);
	sort_algo = ft_parse_args(argc - 1);
	sort_algo(&sta, &stb);
	ft_lstprint_one(sta);
	printf("\n");
	// // ft_lstprint_all(sta, stb);

	// ft_lstprint_all(sta, stb);


	// for (int i = 5; i > 0; i--)
	// 	ft_lstpush(&stb, i, i);
	// ft_swap(&stb, "sb\n");
	// ft_push(&sta, &stb, "pb\n");
	// ft_rotate(&sta, "ra\n");
	// ft_lstprint_all(sta, stb);
		// more than 3 number algorithm
}