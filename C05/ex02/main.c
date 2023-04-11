#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main()
{
	int nb;
	int power;

	printf("Enter a number: ");
	scanf("%d", &nb);
	printf("Enter a power: ");
	scanf("%d", &power);
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
