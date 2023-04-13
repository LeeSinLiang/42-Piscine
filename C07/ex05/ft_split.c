/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:58:08 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/12 10:10:52 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

bool	check_seperator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (true);
		charset++;
	}
	return (false);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		while (*str && check_seperator(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !check_seperator(*str, charset))
			str++;
	}
	return (count);
}

// count string before charset
int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_seperator(str[i], charset))
		i++;
	return (i);
}

char	*word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_strlen(str, charset);
	word = (char *)malloc((len + 1) * 1);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc((count_strings(str, charset) + 1) * 8);
	while (*str)
	{
		while (*str && check_seperator(*str, charset))
			str++;
		if (*str)
		{
			arr[i] = word(str, charset);
			i++;
		}
		while (*str && !check_seperator(*str, charset))
			str++;
	}
	arr[i] = 0;
	return (arr);
}
