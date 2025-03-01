#include <unistd.h>

int convert_to_int(int argc, char *argv[], int *restrictions)
{
    int i;
    int num;

    i = 1;
    num = 0;
    if (argc != 17)
    {
        write(1, "Error: Not enough argv\n", 22);
        return (0);
    }
    while (i < argc)
    {
        num = argv[i][0] - '0';
        if (num < 1 || num > 4)
        {
            write(1, "Error: number must be less than 4\n", 35);
            return (0);
        }
        restrictions[i - 1] = num;
        i++;
    }
    return (1);
}