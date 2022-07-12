/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:38:02 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/11 19:22:26 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstprint(t_list *lst)
{
	int	size;

	size = 1;
	while (lst)
	{
		printf("[%d] %s", size, lst->content);
		lst = lst->next;
		size++;
	}
}

int	main(void)
{
	t_list *beginElement = NULL;
	// t_list *element = NULL;
	char	*s1 = "Vraiment";
	char	*s2 = "Ni";
	char	*s3 = "Quel";

	beginElement = ft_lstnew(s1);
	ft_lstadd_front(&beginElement, ft_lstnew(s2));
	ft_lstadd_front(&beginElement, ft_lstnew(s3));
	ft_lstprint(beginElement);
}
