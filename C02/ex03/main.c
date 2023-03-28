#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(int argc, char	**argv)
{
	if (argc == 2)
	{
		printf("String only contains numeric digits (0 not 1 yes): %d", ft_str_is_numeric(argv[1]));
	}
	printf("\n%s",ft_str_is_numeric("")?"SUCCESS":"FAIL");
	return (0);
}
