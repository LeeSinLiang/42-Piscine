/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:57:58 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 15:39:50 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursion(int nb, int cur)
{
	if (cur == nb)
		return (0);
	if ((cur * cur) == nb)
		return (cur);
	return (recursion(nb, cur + 1));
}

int	ft_sqrt(int nb)
{
	if (nb > 0)
		return (recursion(nb, 1));
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	ans;

	ans = atoi(argv[1]);
	printf("%d\n", ft_sqrt(ans));
}
*/