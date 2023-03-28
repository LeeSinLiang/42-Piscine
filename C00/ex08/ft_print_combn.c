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

struct s_loop
{
	int	current;
	int	n;
	int	i;
};

void	ft_print_combn(int n);
void	ft_print_int(int n);
void	recursion(struct s_loop l, char *display, char *lastdisplay);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	loop(struct s_loop *l, char *display, char *lastdisplay)
{
	int	j;
	int	check;

	j = 0;
	check = 0;
	while (j < l->n - 1)
	{
		ft_putchar(display[j]);
		if (display[j] != lastdisplay[j])
			check = 1;
		++j;
	}
	ft_putchar(l->i + '0');
	if (check == 0 && l->i == (lastdisplay[l->n - 1] - 48))
		return ;
	else
		write(1, ", ", 2);
}

void	recursion(struct s_loop l, char *display, char *lastdisplay)
{
	struct s_loop	l_next;

	while (l.i <= 9)
	{
		if (l.current == l.n - 1)
		{
			loop(&l, display, lastdisplay);
		}
		else
		{
			l_next.i = l.i + 1;
			l_next.current = l.current + 1;
			l_next.n = l.n;
			display[l.current] = l.i + '0';
			recursion(l_next, display, lastdisplay);
		}
		++l.i;
	}
}

void	ft_print_combn(int n)
{
	int				i;
	int				ans;
	char			display[10];
	char			lastdisplay[10];
	struct s_loop	l_new;

	i = 0;
	l_new.i = 0;
	l_new.current = 0;
	l_new.n = n;
	while (i < n)
	{
		ans = 9 - i;
		lastdisplay[n - 1 - i] = ans + '0';
		++i;
	}
	recursion(l_new, display, lastdisplay);
}
