#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(123456, "0123456789");
	printf("\n");
	ft_putnbr_base(123456, "01");
	printf("\n");
	ft_putnbr_base(123456, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(123456, "poneyvif");
}

int		ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

bool	is_base_valid(char *str)
{
	char	*curr;
	int		index;
	int		jndex;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*curr)
	{
		if (*curr == '\t' || *curr == '\n' || *curr == '\v' || *curr == '\f'
			|| *curr == '\r' || *curr == ' ' || *curr == '+' || *curr == '-')
			return (false);
		curr++;
	}
	index = 0;
	while (index < curr - str)
	{
		jndex = index + 1;
		while (jndex < curr - str)
			if (str[index] == str[jndex++])
				return (false);
		index++;
	}
	return (true);
}

void	ft_putnbr_base_recursive(int number, char *base, int radix)
{
	if (number == -2147483648)
	{
		ft_putnbr_base_recursive(number / radix, base, radix);
		write(1, &(base[-(number % radix)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		ft_putnbr_base_recursive(number / radix, base, radix);
	write(1, &(base[number % radix]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (!is_base_valid(base))
		return ;
	radix = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, radix);
}
