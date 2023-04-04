#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	loop(int *display, int *i, int *nb)
{
	while (*nb >= 10)
	{
		display[*i] = *nb % 10;
		*nb /= 10;
		*i += 1;
	}
	*i -= 1;
	ft_putchar(*nb + '0');
}

void	ft_putnbr(int nb)
{
	int	i;
	int	display[10];

	i = 0;
	if (nb <= -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	loop(display, &i, &nb);
	while (i >= 0)
	{
		ft_putchar((display[i] + '0'));
		--i;
	}
}
