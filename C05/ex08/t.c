#include <stdio.h>
#include <unistd.h>

int main()
{
	char i = '/';
	while (++i <= '9')
	{
		write(1, &i, 1);
	}
	return (0);
}
