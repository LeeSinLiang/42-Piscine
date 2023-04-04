/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:15:35 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/04 22:15:35 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int	count(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
		str++;
	return (str - temp);
}

bool	is_valid(char *base)
{
	char	*j;

	if (count(base) <= 1)
		return (false);
	while (*base)
	{
		j = base + 1;
		while (*j)
		{
			if (*base == *j)
				return (false);
			j++;
		}
		if (*base == '+' || *base == '-')
			return (false);
		base++;
	}
	return (true);
}

bool	is_space(char c)
{
	char	*str;

	str = "\t\n\v\f\r ";
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

int	solve(char *str, char *base, int result, int ans)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i] != '\0')
	{
		j = -1;
		while (base[++j] != '\0')
		{
			if (str[i] == base[j])
			{
				ans *= count(base);
				ans += j;
				break ;
			}
		}
		if (base[j] == '\0')
			return (ans * result);
	}
	return (ans * result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;

	result = 1;
	if (is_valid(base))
	{
		while (!(*str >= '0' && *str <= '9') && *str != '\0')
		{
			if (*str == '-')
				result *= -1;
			str++;
		}
		return (solve(str, base, result, 0));
	}
	return (0);
}
