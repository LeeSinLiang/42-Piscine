/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:14:09 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/13 09:40:06 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	struct s_stock_str	*array;

	i = -1;
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	while (++i < ac)
	{
		j = -1;
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = malloc(array[i].size + 1);
		while (av[i][++j])
			array[i].copy[j] = av[i][j];
		array[i].copy[j] = '\0';
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}

/*
int					main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;
	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}
*/