/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:54:47 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/11 11:16:20 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	alloc_len(char **str, int sep_len, int size)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < size)
	{
		count += ft_strlen(str[i]);
		count += sep_len;
	}
	count -= sep_len;
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		z;

	if (size == 0)
		return ((char *)malloc(1));
	arr = (char *)malloc(1 * (alloc_len(strs, ft_strlen(sep), size) + 1));
	i = -1;
	z = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			arr[z++] = strs[i][j];
		if (i != size -1)
		{
			j = -1;
			while (sep[++j])
				arr[z++] = sep[j];
		}
	}
	arr[z] = '\0';
	return (arr);
}

/*
#include <stdio.h>

int	main(void)
{
	int index;
	char **strs;
	char *separator;
	char *result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = " | ";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}
*/