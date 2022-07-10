/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:38:02 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/09 23:26:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstprint(t_list **lst, t_list *new)
{
	int	size;

	size = 1;
	while (*lst != NULL)
	{
		printf("[%d] %s", size, new->content);
		*lst = new->next;
		size++;
	}
}

int	main(void)
{
	t_list *element;
	char	*s = "Niquel";

	element = ft_lstnew(s);
	ft_lstadd_front(&element, element);
	ft_lstprint(&element, element);
}
