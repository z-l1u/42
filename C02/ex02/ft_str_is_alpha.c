int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str1 = "hellO";
	char *str2 = "hel2lO";
	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));
}
*/