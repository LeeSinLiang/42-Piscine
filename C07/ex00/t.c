/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:11:27 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/10 11:12:29 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char	*str;
	char	*allocated;

	str = "";
	printf("x  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
}
