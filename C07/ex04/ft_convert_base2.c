/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:15:35 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/11 11:06:02 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	count(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
		str++;
	return (str - temp);
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

bool	is_valid(char *base)
{
	char	*j;

	j = base;
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
		if (is_space(*base) || *base == '+' || *base == '-')
			return (false);
		base++;
	}
	return (true);
}
