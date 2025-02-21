#include <unistd.h>

void    ft_print_numbers(void)
{
    int number = 0;
    while (number < 10)
    {
        char c = number + '0';
        write(1, &c, 1);
        number++;
    }
}

int main()
{
    ft_print_numbers();
    return 0;
}
