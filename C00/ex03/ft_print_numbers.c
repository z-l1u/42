#include <unistd.h>

void ft_print_numbers(void)
{
	char number = '0';
	while(number <= '9')
	{
		write(1, &number, 1);
		number = number + 1;
	}
}

int main(void)
{
	ft_print_numbers();
}