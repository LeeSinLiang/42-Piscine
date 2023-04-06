/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:07:18 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 20:07:55 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

// check for diagonals and rows
// r. c
bool	is_valid(int *position, int r, int c)
{
	int	i;

	i = -1;
	while (++i < 10)
	{
		if (position[i] == r)
			return (false);
	}
	i = c;
	while (r >= 0 && i >= 0)
	{
		if (position[i--] == r--)
			return (false);
	}
	return (true);
}

void print_arr(int *position)
{
	int i;
	char conversion;

	i = -1;
	while (++i < 10)
	{
		conversion = position[i] + 48;
		write(1, &conversion, 1);
	}
	write(1, "\n", 1);
}

bool recursion(int *position, int r, int c)
{
	int	i;
	char	conversion;

	i = -1;
	if (c == 10)
	{
		print_arr(position);
		return (true);
	}
	if (is_valid(position, r, c))
	{
		position[c] = r;
		while (++i < 10)
			if (recursion(position, i, c+1))
				break;
		position[c] = -1;
	}
	return (false);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	position[10];

	i = -1;
	while (++i < 10)
		position[i] = -1;
	i = -1;
	while (++i < 10)
		recursion(position, i, 0);
	return (0);
}

int main()
{
	ft_ten_queens_puzzle();
	return (0);
}
