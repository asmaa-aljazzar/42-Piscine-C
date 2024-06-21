#include <unistd.h>

int	check_alphabet(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!check_alphabet(str[i]))
		{
		return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
    char *test1 = "HelloWorld";
    char *test2 = "Hello123";
    char *test3 = "Hello World!";
    char *test4 = "";

    printf("Test 1: %d\n", ft_str_is_alpha(test1)); // Should print 1
    printf("Test 2: %d\n", ft_str_is_alpha(test2)); // Should print 0
    printf("Test 3: %d\n", ft_str_is_alpha(test3)); // Should print 0
    printf("Test 4: %d\n", ft_str_is_alpha(test4)); // Should print 1

    return 0;
}*/
