#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    ft_putchar((nbr % 10) + '0');
}

int ft_strlen(char *str)
{
    int counter;

    counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    
    ft_putnbr(counter);
    return counter;
}

int main(void)
{
    char *word;

    word = "marisol";
    ft_strlen(word);
    ft_putchar('\n');
}