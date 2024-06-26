int	ft_strncmp(char *s1 , char *s2 , unsigned int n)
{
	unsigned int 	i;
	int	res;
	
	i = 0;
	res = 0;
	
	if (n != 0){
	while((i < n ))
	{

		if (s1[i] == s2[i]) 
		{
			res = 0;
			i++;
		}
		else if (s1[i] < s2[i])
		{
			res = -1;
			break;
		}
		else if (s1[i] > s2[i])
		{
			res = 1;
			break;
		}
	}
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("Test 1: %d\n",ft_strncmp("","",5));
	printf("Test 2: %d\n",ft_strncmp("ASMAA","aakur",2));
	printf("Test 3: %d",ft_strncmp("asdidfgff","asm",100));
	
	return (0);
}

