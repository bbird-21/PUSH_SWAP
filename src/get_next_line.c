/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:53:15 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/26 18:56:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "utils_checker.h"
#include "parse_std_input.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_newline(char *s)
{
	if (s)
	{
		while (*s)
		{
			if (*s == '\n')
				return (1);
			s++;
		}
	}
	return (0);
}

char	*get_next_line(int fd, t_stack **sta, t_stack **stb)
{
	char	*buffer;
	char	*line;
	int		readed;

	line = NULL;
	readed = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (readed && !ft_newline(line))
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed == -1)
			return (free(buffer), NULL);
		buffer[readed] = 0;
		line = ft_strjoin(line, buffer);
	}
	if (!(is_instruction(line)))
	{
		free(buffer);
		free(line);
		exit_error(sta, stb);
	}
	return (free(buffer), line);
}
