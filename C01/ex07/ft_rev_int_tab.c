#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int aux;
    int i;

    i = 0;
    while (i - (size / 2))
    {
        aux = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = aux;
        i++;
    }
}

void    print_array(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size;

    size = 5;
    print_array(arr, size);

    ft_rev_int_tab(arr, size);

    print_array(arr, size);
}