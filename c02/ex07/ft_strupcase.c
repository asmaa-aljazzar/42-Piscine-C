#include <unistd.h>

char	check_letter(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

char	*ft_strupcase(char *str)
{
	size_t i;
	
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
		ft_strupcase(argv[1]);
		printf("After: %s", argv[1]);
	}
	return (0);
}*/
