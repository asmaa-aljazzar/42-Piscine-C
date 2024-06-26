int	ft_strcmp(char *s1 , char *s2)
{
	int 	i;
	int	res;
	
	i = 0;
	
	while(s1[i] || s2[i])
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
		else 
		{
			res = 1;
			break;
		}
	}
	return (res);
}

#include <stdio.h>

/*int	main(void)
{
	printf("Test 1: %d\n",ft_strcmp("",""));
	printf("Test 2: %d\n",ft_strcmp("aSMAA","Aakur"));
	printf("Test 3: %d",ft_strcmp("","asdfghjk"));
	
	return (0);
}*/
