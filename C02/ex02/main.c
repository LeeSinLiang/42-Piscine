#include <stdio.h>

char	*ft_str_is_alpha(char *src);

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_alpha("")?"SUCCESS":"FAIL",
			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZfdjbdgjgdbjgbssksfbks")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("1")?"SUCCESS":"FAIL",
			!ft_str_is_alpha(" ")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("\\")?"SUCCESS":"FAIL",
			!ft_str_is_alpha("\n")?"SUCCESS":"FAIL");
}
