
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	i;
	
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char src[] = "Asmaa Aljazzar";
	char dest[] = "Owais Mohammad";
	size_t n = 3;
	printf("before dest= %s\n",dest);
	ft_strncpy(dest, src, n);
	printf("after dest= %s",dest);
	return (0);
}*/
