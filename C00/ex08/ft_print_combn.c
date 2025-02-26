#include <unistd.h>

void    print_buffer(int buffer[10], int x)
{
    char    output[10];
    int             i;

    i = 0;
    while (i < x)
    {
        output[i] = buffer[i] + '0';
        i++;
    }
    write(1, output, i);
    if (!(buffer[0] == (10 - x) && buffer[x - 1] == 9))
        write(1, ", ", 2);
    else
        write(1, "\n", 1);
}

void    recursive(int x, int buffer[10], int start, int n)
{
    if (start == x)
    {
        print_buffer(buffer, x);
        return ;
    }
    while (n <= 9)
    {
        if (start == 0 || n > buffer[start - 1])
        {
            buffer[start] = n;
            recursive(x, buffer, start + 1, n + 1);
        }
        n++;
    }
}

void ft_print_combn(int n)
{
   int buffer[10];
   
   if (n < 1 || n> 9)
        return;
    recursive(n, buffer, 0, 0);
}

int main(void)
{
    ft_print_combn(4);
}