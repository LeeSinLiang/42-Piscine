/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:54:47 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 16:27:47 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	printf("Entre com o numero: ");
	scanf("%d", &nb);
	printf("Entre com a potencia: ");
	scanf("%d", &power);
	printf("%d\n", ft_recursive_power(nb, power));
}
*/