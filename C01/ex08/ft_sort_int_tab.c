//#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int x;
	int i = 0;
	int j;
	
	while(i < (size-1))
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				x = tab[j];
				tab[j] = tab[i];
				tab[i] = x;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
 {
	 int tab[5] = {3,1,5,4,2};
	 int size = 5;
	 for(int i = 0; i < size; i++)
	 {
		 printf("%d ", tab[i]);
	 }
	 printf("\n");
	 ft_sort_int_tab(tab, size);
	 for(int i = 0; i < size; i++)
	 {
		 printf("%d ", tab[i]);
	 }
 }
 */