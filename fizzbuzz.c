#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	else
	ft_putchar((n % 10) + '0');
}

void	print_numbers(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 4 == 0)
			write(1, "fizz", 4);
		else if (i % 7 == 0)
			write(1, "buzz", 4);
		else if (i <= 9)
			ft_putchar(i + '0');
		else if (i >= 10)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
		}
		if (i < 100)
			write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	print_numbers();
}