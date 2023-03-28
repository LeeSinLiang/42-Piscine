#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(int argc, char	**argv)
{
	if (argc == 2)
	{
		printf("String only contains uppercase digits (0 not 1 yes): %d", ft_str_is_uppercase(argv[1]));
	}
	printf("\n%s",ft_str_is_uppercase("")?"SUCCESS":"FAIL");
	return (0);
}
