/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:11:41 by sinlee            #+#    #+#             */
/*   Updated: 2023/04/12 09:33:14 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>

int		count(char *str);
bool	is_valid(char *base);
bool	is_space(char c);

int	base_to_decimals(char *str, char *base, int ans)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
			{
				ans *= count(base);
				ans += j;
				break ;
			}
		}
		if (base[j] == '\0')
			return (ans);
	}
	return (ans);
}

char	*decimals_to_base(int nbr, char *base, int i, int j)
{
	int		len;
	char	*ans;
	char	display[11];

	ans = malloc(11);
	len = count(base);
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		ans[0] = '-';
		j = 1;
	}
	while (nbr >= len)
	{
		display[i++] = base[(nbr % len)];
		nbr /= len;
	}
	display[i] = base[nbr];
	while (i >= 0)
		ans[j++] = display[i--];
	ans[j] = '\0';
	return (ans);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	result;

	result = 1;
	if (is_valid(base_from) && is_valid(base_to))
	{
		while ((is_space(*nbr) || *nbr == '+' || *nbr == '-') && *nbr != '\0')
		{
			if (*nbr == '-')
				result *= -1;
			nbr++;
		}
		return (decimals_to_base(result * base_to_decimals(nbr, base_from, 0),
				base_to, 0, 0));
	}
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
*/