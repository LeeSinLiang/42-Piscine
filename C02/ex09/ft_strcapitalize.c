/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinlee <sinlee@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:39:41 by sinlee            #+#    #+#             */
/*   Updated: 2023/03/31 11:07:50 by sinlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}

void	ft_strlowcase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c += 32;
	}
}

void	check(char *str, int *i, int *nextup)
{
	if (str[*i] >= 'A' && str[*i] <= 'Z')
	{
		ft_strlowcase(&str[*i]);
		*nextup = 0;
	}
	else if (str[*i] >= '0' && str[*i] <= '9')
		*nextup = 0;
	else if (str[*i] >= 'a' && str[*i] <= 'z')
		*nextup = 0;
	else
		*nextup = 1;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nextup;

	i = 0;
	nextup = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || nextup == 1)
		{
			nextup = 0;
			if ((str[i] >= 'a' && str[i] <= 'z') \
					|| (str[i] >= 'A' && str[i] <= 'Z'))
			{
				ft_strupcase(&str[i]);
				++i;
				continue ;
			}
		}
		check(str, &i, &nextup);
		++i;
	}
	return (str);
}
