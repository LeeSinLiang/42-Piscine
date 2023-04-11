/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:59:26 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/11 16:22:39 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// sizeof(int) = 4 bytes

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max < min)
		return (NULL);
	i = 0;
	arr = (int *)malloc(4 * (max - min));
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
