#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0)
        write(1, "P", 2);  // Agrega un salto de línea
    else
        write(1, "N", 2);  // Agrega un salto de línea
}

int main()
{
    ft_is_negative(-1);
    return 0;
}