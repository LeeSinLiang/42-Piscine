/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:44:23 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/04 20:44:23 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
		str++;
	return (str - temp);
}

bool	is_valid(char *base)
{
	char	*j;

	if (count(base) <= 1)
		return (false);
	while (*base)
	{
		j = base + 1;
		while (*j)
		{
			if (*base == *j)
				return (false);
			j++;
		}
		if (*base == '+' || *base == '-')
			return (false);
		base++;
	}
	return (true);
}

void	solve(int nbr, char *base, char *display)
{
	int	len;
	int	i;

	len = count(base);
	i = 0;
	while (nbr >= len)
	{
		display[i] = base[nbr % len];
		nbr /= len;
		i++;
	}
	ft_putchar(base[nbr]);
	while (--i >= 0)
		ft_putchar(display[i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	display[10];

	if (is_valid(base))
	{
		if (nbr <= -2147483648)
		{
			write(1, "-", 1);
			solve(-(nbr / count(base)), base, display);
			write(1, &(base[-(nbr % count(base))]), 1);
			return ;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		solve(nbr, base, display);
	}
}
