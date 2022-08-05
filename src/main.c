/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/05 17:37:06 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "tools.h"
#include "do_op.h"
#include "utils.h"
#include "sort_algo.h"
#include "assign.h"
#include "error.h"

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
		ft_swap(sta);
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
		return (-1);
	ft_push_swap(argc - 1, &sta, &stb);
	ft_lstprint_all(sta, stb);
/* The following lines are intented for the operation of the script check.sh */
	// while (stb)
	// {
	// 	printf("<VALUE : %d> [INDEX : %d] (TARGET_POS : %d)\n", stb->value,stb->index, stb->target_pos);
	// 	stb = stb->next;
	// }

// /* The following lines are purposed for the verification of TARGET_POS */
// 	ft_lstpush(&sta, 1);
// 	ft_lstpush(&sta, 3);
// 	ft_lstpush(&sta, 19);
// 	ft_lstpush(&sta, 21);
// 	ft_lstpush(&sta, 19);
// 	ft_lstpush(&sta, 12);
// 	ft_lstpush(&sta, 0);

// 	set_pos(sta, stb);
// 	set_index(sta, 1);
// 	set_target_pos(sta, stb);

// 	ft_push(&sta, &stb);
// 	ft_push(&sta, &stb);
// 	ft_push(&sta, &stb);
// 	ft_rotate(&stb);
// 	ft_swap(&stb);
// 	set_pos(sta, stb);

// 	set_target_pos(sta, stb);

// 	ft_lstprint_all(sta, stb);
// 	while (stb)
// 	{
// 		printf("<VALUE : %d> [INDEX : %d] (TARGET_POS : %d)\n", stb->value,stb->index, stb->target_pos);
// 		stb = stb->next;
// 	}
}

