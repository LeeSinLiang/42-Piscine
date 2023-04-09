#include <stdlib.h>

// sizeof(int) = 4 bytes

int *ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max < min)
		return (0);
	i = 0;
	arr = malloc(4*(max-min));
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
