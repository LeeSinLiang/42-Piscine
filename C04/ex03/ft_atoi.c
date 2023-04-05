/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:33:07 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 10:33:13 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	is_space(char c)
{
	return (is_in_string(c, "\t\n\v\f\r "));
}

int	ft_atoi(char *str)
{
	int	i;
	int	ans;
	int	result;

	i = 0;
	ans = 0;
	result = 1;
	while (is_space(*str))
		str++;
	while (!(*str >= '0' && *str <= '9') && *str != '\0')
	{
		if (*str == '-')
			result *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans *= 10;
		ans += *str - 48;
		str++;
	}
	return (result * ans);
}
