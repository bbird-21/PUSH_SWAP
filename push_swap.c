/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/12 14:46:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include "push_swap.h"
#include "utils.h"
#include "lst.h"

// void	ft_sort_two()

// void	ft_sort_three()

// void	ft_sort()

int	main(int argc, char **argv)
{

	int		value;
	t_stack	*sta;
	t_stack	*stb;

	sta = NULL;
	stb = NULL;

	value = 0;
	if (argc == 2){
		printf("Need to implement sa algo");
	}
		// sa
	else if (argc == 3){
		printf("need to implement 3 number algo");
	}
		// 3 number algorithm
	else if (argc > 3)
	{
		while (--argc)
		{
			value = ft_atoi(argv[argc]);
			// ft_lstadd_front(&sta, ft_lstnew(value));
			ft_lstpush(&sta, value, argc);
		}
		for (int i = 5; i > 0; i--)
		{
			ft_lstpush(&stb, i, i);
		}
	}
	ft_lstprint(sta, stb);
		// more than 3 number algorithm
}

// int	triple(int	*nb)
// {
// 	*nb = 21;
// 	nb =
// }