/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:53:05 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/09 20:53:05 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str, int i)
{
	while(str[i])
		++i;
	return (i);
}

char *ft_strdup(char *src)
{
	int	i;
	char *dest;

	i = -1;
	if ((dest = (char *)malloc(ft_strlen(src, 0)+1)) == NULL)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
