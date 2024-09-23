//#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int x;
	int i = 0;
	
	while(i < (size - 1))
	{
		x = tab[size-1];
		tab[size -1] = tab[i];
		tab[i] = x;
		i++;
		size--;
	}
}
/*
 int main(void)
 {
	 int tab[5] = {1,2,3,4,5};
	 int size = 5;
	 for(int i = 0; i < size; i++)
	 {
		 printf("%d ", tab[i]);
	 }
	 printf("\n");
	 ft_rev_int_tab(tab, size);
	 for(int i = 0; i < size; i++)
	 {
		 printf("%d ", tab[i]);
	 }
 }
 */