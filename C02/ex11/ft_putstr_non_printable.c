/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:03:02 by sinlee            #+#    #+#             */
/*   Updated: 2023/03/30 17:03:02 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		convert;
	char	conversion;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			write(1, "\\", 1);
			hexa(str[i]);
		}
		++i;
	}
}
