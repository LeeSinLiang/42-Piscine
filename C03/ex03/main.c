#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 4));
	printf("ft : %s$\n", ft_strncat(dest2, src, 4));
}

// int main() {
// 	char str1[100] = "Hello", str2[] = " World";

// 	// concatenates str1 and str2
// 	// the resultant string is stored in str1.
// 	strncat(str1, str2, 4);

// 	puts(str1);
// 	puts(str2);
// 	printf("\n");
// 	char str3[100] = "Hello", str4[] = " World";

//    // concatenates str1 and str2
//    // the resultant string is stored in str1.
//    ft_strncat(str3, str4, 4);

//    puts(str3);
//    puts(str4);

//    return 0;
// }
