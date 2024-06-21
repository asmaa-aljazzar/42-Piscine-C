#include <unistd.h>

int	check_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)

	unsigned int i 
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_numeric(str[i])))
		{
		return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Test = %d", ft_str_is_numeric(argv[1]));
	}
}*/
