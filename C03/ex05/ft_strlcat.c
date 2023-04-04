/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:08:28 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/04 16:08:28 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count(char *dest)
{
	unsigned int	len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_i;
	unsigned int	dest_length;
	unsigned int	remaining;

	dst = dest;
	src_i = src;
	remaining = size;
	while (remaining-- != 0 && *dst != '\0')
		dst++;
	dest_length = dst - dest;
	remaining = size - dest_length;
	if (remaining == 0)
		return (dest_length + count(src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*dst++ = *src;
			remaining--;
		}
		src++;
	}
	*dst = '\0';
	return (dest_length + (src - src_i));
}
