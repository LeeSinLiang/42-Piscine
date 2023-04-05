/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:18:12 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 11:57:12 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sorting algorithm: selection sort
// time complexity: O(n^2)
// space complexity: O(1)

// min[2]: value and index

void	swap(int a, int b, int *tab)
{
	int	temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

// 6 1 2 4 3 5
/*
	First element: 6
	Smallest value index: 1
	swap(arr[0], arr[1])
	1 6 2 4 3 5
	Second element: 6
	Smallest value index: 2
	swap(arr[1], arr[2])
	1 2 6 4 3 5
	Third element: 6
	Smallest value index: 4
	swap(arr[2], arr[4])
	
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min[2];
	int	check;

	i = 0; // O(1)
	while (i < size - 1)
	{
		check = 0;
		j = i + 1;
		min[0] = __INT_MAX__;
		while (j < size)
		{
			if (tab[i] > tab[j] && tab[j] < min[0])
			{
				min[0] = tab[j];
				min[1] = j;
				check = 1;
			}
			++j;
		}
		if (check == 1)
			swap(i, min[1], tab);
		++i;
	}
}
