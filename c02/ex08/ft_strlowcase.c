#include <unistd.h>

char	check_letter(char c)
{
	if (c <= 'Z' && c >= 'A')
	{
		c += 32;
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = check_letter(str[i]);
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Before: %s\n", argv[1]);
		printf("After: %s", ft_strlowcase(argv[1]));
	}
	return (0);*/
}
