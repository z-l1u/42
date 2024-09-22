#include <unistd.h>

int main(void)
{
	int a = 67;
	write(1, &a, 2);
}