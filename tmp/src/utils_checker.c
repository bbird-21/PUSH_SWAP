/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:53:46 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/01 11:59:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "tools.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i++])
			;
		return (i);
	}
	return (0);
}

char	*ft_strjoin(char *line, char *buffer)
{
	char	*p;
	int		i;
	int		j;

	j = 0;
	i = 0;
	p = malloc(sizeof(char) * (ft_strlen((char *)line)
				+ ft_strlen((char *)buffer)) + 1);
	if (!p)
		return (NULL);
	if (line != NULL)
	{
		while (line[i])
		{
			p[i] = line[i];
			i++;
		}
	}
	while (buffer[j])
		p[i++] = buffer[j++];
	p[i] = '\0';
	if (line != NULL)
		free(line);
	return (p);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(sizeof(char) * ft_strlen((char *)src) + 1);
	if (!p)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
