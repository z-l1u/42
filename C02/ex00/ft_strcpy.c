char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return dest;
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "Dest";
	char	src[] = "Source";

	printf("dest before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after: %s\n", dest);
}
*/