#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int NO_MATCH = 0;
int INVALID_BASE = 0;

int		main(int argc, char **argv)
{
	char	*base;
	char	*nbr;
	int		result;

	//Basically i have to find the value of nbr
	//in this example -> 42
	nbr = argv[1];  //"101010"
	base = argv[2]; //"01"

					//nbr & base a are strings!
	result = ft_atoi_base(nbr, base);


	if (NO_MATCH)
		printf("The symbols in the base don't match the sample number\n");
	else if (INVALID_BASE)
		printf("Invalid base\n");
	else
		printf("The real value of \"%s\" in base \"%s\" is -> %d\n", nbr, base, result);
}

/*int		main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
}*/
