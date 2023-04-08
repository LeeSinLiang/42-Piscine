/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:07:18 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/07 11:57:03 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

// check for diagonals and rows
// diagonals ascending and descending
// r, c

bool	is_valid(int *position, int r, int c)
{
	int	i;
	int	temp;

	i = -1;
	while (++i < 10)
	{
		if (position[i] == r)
			return (false);
	}
	i = c;
	temp = r;
	while (temp >= 0 && i >= 0)
	{
		if (position[i--] == temp--)
			return (false);
	}
	i = c;
	while (r <= 9 && i >= 0)
	{
		if (position[i--] == r++)
			return (false);
	}
	return (true);
}

void	print_arr(int *position)
{
	int		i;
	char	conversion;

	i = -1;
	while (++i < 10)
	{
		conversion = position[i] + 48;
		write(1, &conversion, 1);
	}
	write(1, "\n", 1);
}

bool	recursion(int *position, int r, int c, int *count)
{
	int		i;

	i = -1;
	if (c == 10)
	{
		print_arr(position);
		*count += 1;
		return (true);
	}
	if (is_valid(position, r, c))
	{
		position[c] = r;
		while (++i < 10)
			if (recursion(position, i, c + 1, count) == true)
				break ;
		position[c] = -1;
	}
	return (false);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	position[10];
	int	count;

	i = -1;
	count = 0;
	while (++i < 10)
		position[i] = -1;
	i = -1;
	while (++i < 10)
		recursion(position, i, 0, &count);
	return (count);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
*/