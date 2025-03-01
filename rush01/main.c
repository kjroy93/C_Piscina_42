#include <unistd.h>
#include <stdio.h>

int convert_to_int(int argc, char *argv[], int *restrictions);

void    print_array(int *arr)
{
    int i;

    i = 0;
    while (i < 16)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    int     restrictions[16];

    if (argc <= 2)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    if (!convert_to_int(argc, argv, restrictions))
        return (1);
    print_array(restrictions);
}
