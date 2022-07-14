/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:20:20 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/07/14 15:46:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include "utils.h"
#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
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
		i++;
	}
	if (res * neg  > 2147483647 || res * neg  < -2147483648)
		return (-1);
	return (res * neg);
}

int	ft_putchar(char c)
{
	int	count;

	count = 0;
	return (count = write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

t_bool	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	if (s1[i] == s2[i])
		return (true);
	return (false);
}

t_bool	ft_checkargs(int argc, char **argv)
{
	int	i;
	int	j;

	while (--argc)
	{
		i = 0;
		j = 1;
		while (argv[argc][i])
		{
			if (argv[argc][i] < 48 || argv[argc][i] > 57)
				return (false);
			i++;
		}
		while (j < argc)
		{
			if (ft_strcmp(argv[argc], argv[j]))
				return (false);
			j++;
		}
	}
	return (true);
}
