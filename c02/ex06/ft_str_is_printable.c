#include <unistd.h>

int	check_char(char c)
{
	if (c >= '!' && c <= '~' ) 
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_char(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Test = %d", ft_str_is_printable(argv[1]));
	}
	return (0);
}*/
