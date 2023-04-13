/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:01:24 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/13 10:09:45 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	char	ans;

	if (nbr <= 9)
	{
		ans = nbr + 48;
		write(1, &ans, 1);
		return ;
	}
	ft_putnbr(nbr / 10);
	ans = (nbr % 10) + 48;
	write(1, &ans, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	n;

	n = -1;
	while (par[++n].str)
	{
		ft_putstr(par[n].str);
		ft_putnbr(par[n].size);
		write(1, "\n", 1);
		ft_putstr(par[n].copy);
	}
}

/*
#include "../ex04/ft_strs_to_tab.c"
int					main(int argc, char **argv)
{

	ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/
