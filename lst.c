/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:02:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/09 21:30:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "basics.h"

t_stack	ft_fillstack(int value)
{
	ft_lstnew(value);
	ft_lstadd_front()
}

t_stack	*ft_lstnew(int value)
{
	t_stack *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->value = value;
	return(new);

}

void	ft_lstadd_front(t_stack **lst, t_stack *element)
{
	element->next = *lst;
	*lst = element;
}

void	ft_lstprint(t_stack	**lst, t_stack *element)
{
	while (element != NULL)
	{
		printf("[%d]\n", element->value);
		element = element->next;
	}
}
