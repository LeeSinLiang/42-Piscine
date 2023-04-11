int	ft_recursive_power(int nb, int power);

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	printf("Entre com o numero: ");
	scanf("%d", &nb);
	printf("Entre com a potencia: ");
	scanf("%d", &power);
	printf("%d\n", ft_recursive_power(nb, power));
}
