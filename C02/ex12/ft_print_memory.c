/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:32:09 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/03 16:41:20 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/// @brief 1 t_byte representation
typedef unsigned char	t_byte;

/*
Division: Most significant bits
Modulo:  Least significant bits
*/
void	pbytehex(t_byte byte)
{
	char	ans;

	if ((byte / 16) < 10)
	{
		ans = 48 + (byte / 16);
		write(1, &ans, 1);
	}
	else
	{
		ans = 87 + (byte / 16);
		write(1, &ans, 1);
	}
	if ((byte % 16) < 10)
	{
		ans = 48 + (byte % 16);
		write(1, &ans, 1);
	}
	else
	{
		ans = 87 + (byte % 16);
		write(1, &ans, 1);
	}
}

void	paddrhex(void *str)
{
	int		i;
	t_byte	*pbyte;

	i = 7;
	pbyte = (t_byte *)&str;
	while (i >= 0)
	{
		pbytehex(*(pbyte + i));
		--i;
	}
}

void	pcontenthex(void *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		pbytehex(*((t_byte *)str));
		++i;
		++str;
	}
	if (i % 2 == 1)
		write(1, "  ", 2);
	if (i % 2 == 1)
		size++;
	i = 0;
	while (size < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		++i;
		++size;
	}
	write(1, " ", 1);
}

void	pcontent(void *str, unsigned int size)
{
	int	lim;

	lim = 16;
	while (--size && lim--)
	{
		if (*(char *) str >= ' ' && *(char *) str <= 126)
			write(1, str, 1);
		else
			write(1, ".", 1);
		++str;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;

	i = 0;
	if (size > 1)
	{
		paddrhex(addr);
		write(1, ":", 1);
		pcontenthex(addr, size);
		pcontent(addr, size);
		write(1, "\n", 1);
	}
	return (addr);
}
