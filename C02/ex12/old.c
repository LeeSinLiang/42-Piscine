/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:32:09 by sinlee            #+#    #+#             */
/*   Updated: 2023/03/30 18:32:09 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/// @brief 1 Byte representation
typedef unsigned char byte;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void pByteHex(byte Byte)
{
	// Most significant bits
	if ((Byte / 16) < 10)
		ft_putchar(48 + (Byte / 16));
	else
		ft_putchar(87 + (Byte / 16));
	// Least significant bits
	if ((Byte % 16) < 10)
		ft_putchar(48 + (Byte % 16));
	else
		ft_putchar(87 + (Byte % 16));
}

void pAddrHex(void *str)
{
	int		i;
	byte	*pByte;

	i = 7; // Little endian
	pByte = (byte *)&str;
	while (i>=0)
	{
		pByteHex(*(pByte + i));
		--i;
	}
}

void pContentHex(void *str, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size && i < 16)
	{
		if (i%2==0)
		{
			ft_putchar(' ');
		}
		pByteHex(*((byte *)str));
		++i;
		++str;
	}
	if (i % 2 == 1)
	{
		write(1, "  ", 2);
		size++;
	}
	i = 0;
	while (size < 16)
	{
	if (i%2==0)
		{
			ft_putchar(' ');
		}
		write(1, "  ", 2);
		++i;
		++size;
	}
	ft_putchar(' ');
}

void pContent(void *str, unsigned int size)
{
	int lim;

	lim = 16;
	while (--size && lim--)
	{
		if (*(char	*)str >= ' ' && *(char	*)str <= 126)
			write(1, str, 1);
		else
			write(1, ".", 1);
		++str;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int i;

	i = 0;
	if (size > 1)
	{
		pAddrHex(addr);
		ft_putchar(':');
		pContentHex(addr, size);
		pContent(addr, size);
		ft_putchar('\n');
	}
	return (addr);
}
