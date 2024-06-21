#include <unistd.h>

int	check_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_lower(str[i])))
		{
			return(0);
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
		printf("Test = %d", ft_str_is_lowercase(argv[1]));
	}
	return (0);
}*/
