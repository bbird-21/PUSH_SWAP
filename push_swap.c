/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:00:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/09 21:27:43 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include "lst.h"
#include "push_swap.h"
#include "utils.h"

void	ft_sort_two()

void	ft_sort_three()

void	ft_sort()

int	main(int argc, char **argv)
{
	int	value;

	value = 0;
	if (argc == 2){
		printf("Need to implement sa algo");
	}
		// sa
	else if (argc == 3){
		printf("need to implement 3 number algo");
	}
		// 3 number algorithm
	else (argc > 3)
	{
		while (argc--)
		{
			printf("argc : %d\n", argc);
			ft_fillstack(ft_atoi(argv(argc)));
		}
	}
		// more than 3 number algorithm

}
