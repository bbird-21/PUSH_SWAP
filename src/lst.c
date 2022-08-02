/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:02:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/02 17:14:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstpush(t_stack **lst, int value)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return ;
	new->value = value;
	new->next = *lst;
	new->index = 0;
	*lst = new;
}

int	ft_lstsize(t_stack *st)
{
	int	lenght;

	lenght = 0;
	while (st)
	{
		st = st->next;
		lenght++;
	}
	return (lenght);
}

void	ft_lstprint_all(t_stack *sta, t_stack *stb)
{
	int	count;
	int	space;

	space = 45;
	while (sta || stb)
	{
		count = 0;
		if (sta)
		{
			count = printf("|[VALUE : %d] [POS : %d] [INDEX : %d]|", sta->value, sta->pos, sta->index);
			sta = sta->next;
		}
		count = space - count;
		printf("%*c", count, ' ');
		if (stb)
		{
			printf("|[VALUE : %d] [POS : %d] [INDEX : %d]|", stb->value, stb->pos,stb->index);
			stb = stb->next;
		}
		printf("\n");
	}
	printf("-------%*c-------\n", space, '-');
	printf("STACK A%*cSTACK B\n\n", space, ' ');
}

void	ft_lstprint_one(t_stack *st)
{
	while (st)
	{
		printf("|[VALUE : %d][POS : %d][INDEX : %d]|\n", st->value, st->pos, st->index);
		st = st->next;
	}
	printf("\n\n");
}
