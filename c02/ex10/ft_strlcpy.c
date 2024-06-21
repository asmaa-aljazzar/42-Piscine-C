#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;
	unsigned int	count;
	
	i = 0;
	count = 0;
	while (src[count] !='\0')
	{
	count++;
	}
	if (size < 1)
	{
	return (count);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i]= '\0';
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	unsigned int n = 20;
	 
	char dest[n];
	
	dest[0] = '\0';
	
	char src[] = "my name is asmaa aljazzar";
	
	printf("Before dest= %s\n", dest);
	ft_strlcpy(dest, src, n);
	printf("After dest= %s", dest);
	
	return (0);
}*/
