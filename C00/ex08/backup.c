
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:31:40 by sinlee            #+#    #+#             */
/*   Updated: 2023/03/28 12:31:40 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_print_combn(int n);
void	ft_print_int(int n);
void	recursively_print_digit(int current, int n, char *display, int i, char *lastdisplay);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	ft_print_combn(2);
	return 0;
}

void	recursively_print_digit(int current, int n, char *display, int i, char *lastdisplay)
{
	while (i <= 9)
	{
		if (current == n - 1)
		{
			int j, check;

			j = 0;
			check = 0;
			while (j < n - 1)
			{
				ft_putchar(display[j]);
				if (display[j] != lastdisplay[j])
					check = 1;
				++j;
			}
			ft_putchar(i + '0');
			if (check == 0 && i == (lastdisplay[n - 1] - 48))
				return;
			else
				write(1, ", ", 2);
		}
		else
		{
			display[current] = i + '0';
			recursively_print_digit(current + 1, n, display, i + 1, lastdisplay);
		}
		++i;
	}

	if (current == n - 1)
	{
		return;
	}
}

void	ft_print_combn(int n)
{
	int i;
	int ans;
	char display[n];
	char lastdisplay[2];

	i = 0;
	while (i < n)
	{
		ans = 9 - i;
		lastdisplay[n - 1 - i] = ans + '0';
		++i;
	}
	recursively_print_digit(0, n, display, 0, lastdisplay);
}
