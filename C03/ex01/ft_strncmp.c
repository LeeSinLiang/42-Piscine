/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:11:49 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/10 14:46:29 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (*s1 != '\0' && (*s1 == *s2) && ++i < n)
	{
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
