/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:07:18 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 20:07:32 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

// check for diagonals
bool	is_valid(int *position, int c)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (position == c)
			return (false);
	}
}

int	ft_ten_queens_puzzle(void)
{
}