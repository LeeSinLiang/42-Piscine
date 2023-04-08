/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:28:37 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/08 15:54:51 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		ans *= i;
	}
	return (ans);
}
