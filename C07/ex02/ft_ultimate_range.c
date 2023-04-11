/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:08:54 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/11 16:22:08 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max < min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(4 * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

/*
#include <stdio.h>
int	main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    size;
    int    i;

    
    i = 0;
    min = 5;
    max = 10;
    size = ft_ultimate_range(&tab, min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}
*/