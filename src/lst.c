/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:02:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/08/14 15:53:47 by mmeguedm         ###   ########.fr       */
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
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
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

t_bool	ft_is_sta(t_stack **sta, t_bool reset_sta)
{
	static t_stack **sta_glob = 0;

	if (sta_glob == 0 || reset_sta)
		sta_glob = sta;
	if (sta_glob == sta)
		return (true);
	return (false);
}

void	ft_lstprint_all(t_stack *sta, t_stack *stb)
{
	int	count;
	int	space;

	space = 70;
	while (sta || stb)
	{
		count = 0;
		if (sta)
		{
			count = printf("|[VALUE : %d] [POS : %d] [INDEX : %d][TARGET_POS : %d] [COST : %d]|", sta->value, sta->pos, sta->index, sta->target_pos, sta->cost_a);
			sta = sta->next;
		}
		count = space - count;
		printf("%*c", count, ' ');
		if (stb)
		{
			printf("|[VALUE : %d] [POS : %d] [INDEX : %d][TARGET_POS : %d] [COST A: %d] [COST B : %d]|", stb->value, stb->pos,stb->index, stb->target_pos, stb->cost_a, stb->cost_b);
			stb = stb->next;
		}
		printf("\n");
	}
	printf("--------------%*c--------------\n", space, '-');
	printf("STACK A%*c       STACK B\n\n", space, ' ');
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
