/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:02:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/12 15:25:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "basics.h"
#include "operations.h"

// t_stack	ft_fillstack(int value, t_stack st)
// {
// 	ft_lstadd_front(&st, ft_lstnew(value));
// }

void	ft_lstpush(t_stack **lst, int value, int pos)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return ;
	new->value = value;
	new->pos = pos;
	new->next = *lst;
	*lst = new;
}

int	ft_lstlenght(t_stack *st)
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

void	ft_lstprint(t_stack *sta, t_stack *stb)
{
	int	count;
	int	space;

	space = 0;
	while (sta || stb)
	{
		count = 0;
		if (sta)
		{
			count = printf("|[VALUE : %d] [POS : %d]|   ", sta->value, sta->pos);
			sta = sta->next;
		}
		if (space <= count)
			space = count;
		if (count == 0)
			printf("%*c", space, ' ');
		if (stb)
		{
			printf("|[VALUE : %d] [POS : %d]|", stb->value, stb->pos);
			stb = stb->next;
		}
		printf("\n");
	}
	printf("-------%*c-------\n", space, ' ');
	printf("STACK A%*cSTACK B", space, ' ');
}
