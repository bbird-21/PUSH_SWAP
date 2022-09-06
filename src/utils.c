/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:20:20 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/09/06 11:06:49 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lst.h"
#include "tools.h"
#include <stdio.h>
#include "parse_std_input.h"
#include "limits.h"

long	ft_atoi(const char *str)
{
	int			i;
	long long	res;
	int			neg;

	neg = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if (res * neg > INT_MAX || res * neg < INT_MIN)
			return (INT_OVERFLOW);
		i++;
	}
	return (res * neg);
}

int	ft_putchar_fd(char c, int fd)
{
	int	count;

	count = 0;
	return (count = write(fd, &c, 1));
}

int	ft_putstr_fd(char *str, int fd)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += ft_putchar_fd(*str, fd);
		str++;
	}
	return (count);
}

t_bool	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	if (s1[i] == s2[i])
		return (false);
	return (true);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
