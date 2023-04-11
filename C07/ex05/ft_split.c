/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:46:08 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/11 16:39:44 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

int		count_words(char *str, char *charset, int len);
bool	ft_strstr(char *str, char *to_find);

int	count_str(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (charset != 0)
		{
			if (ft_strstr(str, charset))
				break ;
		}
		++i;
		str++;
	}
	return (i);
}

int	count_words(char *str, char *charset, int len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0])
		count++;
	while (*str)
	{
		if (ft_strstr(str, charset))
		{
			if (*(str + len) >= 33 && *(str + len) <= 126)
				count++;
		}
		str++;
	}
	return (count);
}

bool	ft_strstr(char *str, char *to_find)
{
	int	j;

	j = -1;
	if (!to_find[0])
		return (false);
	while (to_find[++j] != '\0')
	{
		if (str[j] != to_find[j])
			return (false);
	}
	return (true);
}

int	insert(char *arr, char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str && !(ft_strstr(str, charset)))
	{
		*arr = *str;
		str++;
		arr++;
		i++;
	}
	*arr = '\0';
	return (i - 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		len;

	i = 0;
	len = count_str(charset, 0);
	arr = (char **)malloc((count_words(str, charset, len) + 1) * 8);
	arr[count_words(str, charset, len)] = 0;
	if (str[0] == '\0')
		return (arr);
	arr[0] = (char *)malloc((count_str(str, charset) + 1));
	insert(arr[0], str, charset);
	while (*str && str++)
	{
		if (ft_strstr(str, charset) \
		&& (*(str + len) >= 33 && *(str + len) <= 126) && ++i)
		{
			str = str + len;
			arr[i] = malloc(count_str(str, charset) + 1);
			str = str + (insert(arr[i], str, charset));
		}
		if (*str == '\0')
			break ;
	}
	return (arr);
}


#include <stdio.h>
int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}

/*
int	main(void)
{
	ft_split("Hello | World | Wohoo", " | ");
	return (0);
}
*/