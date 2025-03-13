#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
            new_word = 0;
        }
		else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;

		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			new_word = 1;
		else
			new_word = 0;

		i++;
	}
	return (str);
}

int	main(void)
{
	char str1[] = "hola mundo! esto es una PRUEBA. 42c es genial.";
	char str2[] = "eL qUiCk bRoWn foX jUmPs oVeR tHe LaZy DoG!";
	char str3[] = "123abc DEF ghi";
	
	printf("Antes: %s\n", str1);
	ft_strcapitalize(str1);
	printf("Después: %s\n\n", str1);

	printf("Antes: %s\n", str2);
	ft_strcapitalize(str2);
	printf("Después: %s\n\n", str2);

	printf("Antes: %s\n", str3);
	ft_strcapitalize(str3);
	printf("Después: %s\n\n", str3);

	return (0);
}