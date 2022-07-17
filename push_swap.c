/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/17 19:31:46 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "utils.h"
#include "lst.h"
#include "do_op.h"
#include "sort_algo.h"
#include "assign.h"
#include "error.h"

// void	ft_sort_three()

void	ft_fillstack(int argc, char **argv, t_stack **sta)
{
	int	value;

	value = 0;
	while (--argc)
	{
		value = ft_atoi(argv[argc]);
		ft_lstpush(sta, value, argc);
	}
}

t_pf	ft_parse_args(int argc)
{
	t_pf	*table;

	table = (t_pf[3]){
		NULL,
	[0] = ft_sort_two,
	// [1] = // ft_sort_three
	[2] = ft_sort
	};
	if (argc > 3)
		return (table[2]);
	return (table[argc]);
}

int	main(int argc, char **argv)
{

	int		value;
	t_stack	*sta;
	t_stack	*stb;
	t_pf	sort_algo;

	sta = NULL;
	stb = NULL;
	value = 0;
	if (argc > 1 && !(ft_checkargs(argc, argv + 1)))
		return (ft_putstr("Error\n"));
	ft_fillstack(argc, argv, &sta);
	ft_assign_index(sta, 1);
	ft_lstprint_one(sta);
	printf("\n");
	// ft_lstprint_all(sta, stb);

	// sort_algo = ft_parse_args(argc - 1);
	// sort_algo(&sta, &stb);

	// ft_lstprint_all(sta, stb);


	// for (int i = 5; i > 0; i--)
	// 	ft_lstpush(&stb, i, i);
	// ft_swap(&stb, "sb\n");
	// ft_push(&sta, &stb, "pb\n");
	// ft_rotate(&sta, "ra\n");
	// ft_lstprint_all(sta, stb);
		// more than 3 number algorithm
}