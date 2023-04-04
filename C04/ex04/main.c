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
	printf("\n");
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	// ft_putnbr_base(INT_MIN, "01")1;
	// printf("\n");
	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(INT_MIN, "poneyvif");
}
