#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write (1, "No arguments to print...", 24);
	}
	else
	{
		int	i;
		int	j;
		
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write (1, &argv[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
}
