#include <unistd.h>

// int main(int argc, char *argv[])
// {
//     char    *word;
//     int     size;
//     char    letter;
//     int     i;
//     int     found_a;

//     i = 0;
//     size = 0;
//     found_a = 0;
//     word = argv[1];
//     while (word[size] != '\0')
//         size++;
//     while (i < size)
//     {
//         letter = word[i];
//         if (letter == 'a')
//         {
//             write(1, &letter, 1);
//             found_a++;
//         }
//         i++;
//     }
//     if (!found_a)
//         write(1, "a", 1);
//     write(1, "\n", 1);
// }

void    find_letter(char *phrase, int size)
{
    int     i;
    char    letter;
    int     lng;
    int     found_a;

    i = 0;
    lng = size;
    letter = '0';
    found_a = 0;
    while (i < lng)
    {
        letter = phrase[i];
        if (letter == 'a')
        {
            write(1, &letter, 1);
            found_a++;
            break;
        }
        i++;
    }
    if (!found_a)
        write(1, "a\n", 1);
}

int main(void)
{
    char *word;
    int size;

    word = "ala";
    size = sizeof(word);

    find_letter(word, size);
}