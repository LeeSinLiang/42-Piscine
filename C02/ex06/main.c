#include <stdio.h>

int	ft_str_is_printable(char *str);

int main(int argc, char	**argv)
{
	if (argc == 2)
	{
		printf("String only contains printable digits (0 not 1 yes): %d", ft_str_is_printable(argv[1]));
	}
	printf("\n%s",ft_str_is_printable("")?"SUCCESS":"FAIL");
	return (0);
}
