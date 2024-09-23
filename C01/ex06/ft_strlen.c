int ft_strlen(char *str)
{
	int n = 0;
	while((*str != '\0'))
	{
		n++;
		str ++;
	}
	return n;
}