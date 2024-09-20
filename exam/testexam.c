#include <unistd.h>

void ft_print_alphabet2(void)
{
	char letter = 'a';
	while(letter <= 'z')
	{
		char output;
		if((letter - 'a') % 2 ==0)
		{
			output = letter;
		}
		else
		{
			output = letter - 'a' + 'A';
		}
		write(1, &output, 1);
		letter = letter + 1;
	}
}

int main(void)
{
	ft_print_alphabet2();
}