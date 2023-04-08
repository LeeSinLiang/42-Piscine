/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:42:49 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/07 12:08:40 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	j;
	int	check;

	if (nb < 2)
		return (2);
	while (nb)
	{
		check = 0;
		j = 2;
		while (j < nb)
		{
			if (nb % j == 0)
			{
				check = 1;
				break ;
			}
			j++;
		}
		if (check == 0)
			return (nb);
		nb++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int nb;

	nb = atoi(argv[1]);
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
*/

/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
}
*/