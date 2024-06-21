#include <unistd.h>

char 	*ft_strcapitalize(char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			if (str[i + 1] <='z' && str[i + 1] >= 'a')
			{
				str[i + 1] -= 32;
			}
		}
		if (str[0] <= 'z' && str[0] >= 'a')
		{
			str[0] -= 32;
		}
		i++;"
	}
	return (str);
}
/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Before: %s\n", argv[1]);
		printf("After: %s", ft_strcapitalize(argv[1]));
	}*/
	return (0);
}
