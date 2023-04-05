/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:12:47 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/05 10:29:37 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	if (!to_find[0])
		return (str);
	while (*str)
	{
		j = -1;
		while (to_find[++j] != '\0')
		{
			if (str[j] != to_find[j])
			{
				str++;
				break ;
			}
		}
		if (to_find[j] == '\0')
			return (str);
	}
	return (0);
}
