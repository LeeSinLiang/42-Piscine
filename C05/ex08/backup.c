#include <stdbool.h>
#include <unistd.h>

// check for diagonals and rows
// r. c
bool    is_valid(int *position, int r, int c)
{
    int    i;

    i = -1;
    while (++i < 5)
    {
        if (position[i] == r)
            return (false);
    }
    i = c;
    while (r >= 0 && i >= 0)
    {
        if (position[i--] == r--)
            return (false);
    }
    return (true);
}

void recursion(int *position, int r, int c)
{
    int    i;
    char    conversion;

    i = -1;
    if (c == 5)
    {
        write(1, "\n", 1);
        return ;
    }
    if (is_valid(position, r, c))
    {
        conversion = r + 48;
        write(1, &conversion, 1);
        position[c] = r;
        while (++i < 5)
            recursion(position, i, c+1);
    }
}

int    ft_ten_queens_puzzle(void)
{
    int    i;
    int    position[5];

    i = -1;
    while (++i < 5)
        position[i] = -1;
    i = -1;
    while (++i < 3)
        recursion(position, i, 0);
    return (0);
}

int main()
{
    ft_ten_queens_puzzle();
    return (0);
}
