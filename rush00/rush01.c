void	ft_putchar(char c);

void	firstline(int n, char start, char mid, char end);
void	midline(int n, char openandend, char mid);
void	lastline(int n, char start, char mid, char end);

void	rush(int n, int m)
{
	int	i;

	i = 0;
	if (n >= 1)
	{
		firstline(n, '/', '*', '\\');
		ft_putchar('\n');
		if (m > 1)
		{
			while (i < m - 2)
			{
				midline(n, '*', ' ');
				ft_putchar('\n');
				++i;
			}
			lastline(n, '\\', '*', '/');
			ft_putchar('\n');
		}
	}
}

void	firstline(int n, char start, char mid, char end)
{
	int	i;

	i = 0;
	ft_putchar(start);
	if (n != 1)
	{
		while (i < n - 2)
		{
			ft_putchar(mid);
			++i;
		}
		ft_putchar(end);
	}
}

void	midline(int n, char openandend, char mid)
{
	int	i;

	if (n != 1)
	{
		i = 0;
		ft_putchar(openandend);
		while (i < n - 2)
		{
			ft_putchar(mid);
			++i;
		}
	}
	ft_putchar(openandend);
}

void	lastline(int n, char start, char mid, char end)
{
	int	i;

	ft_putchar(start);
	if (n != 1)
	{
		i = 0;
		while (i < n - 2)
		{
			ft_putchar(mid);
			++i;
		}
		ft_putchar(end);
	}
}
