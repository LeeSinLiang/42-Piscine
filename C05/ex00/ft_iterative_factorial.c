int	ft_iterative_factorial(int nb)
{
	int	i;
	int ans;

	i = 0;
	ans = 1;
	if (nb <= 0)
		return (0);
	while (++i <= nb)
	{
		ans *= i;
	}
	return (ans);
}
