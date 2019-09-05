#include <stdio.h>

int	ft_unmatch(int *tab, int length)
{
	int index;
	int holder;
	int h_index;

	index = 0;
	h_index = 0;
	while (1)
	{
		holder = tab[h_index];
		while (index < length)
		{
			printf("h_i: %d |h: %d |t[i]: %d |i: %d\n", h_index, holder ,tab[index], index);
			if (index == h_index) 
			{
				continue;
			}
			else if (tab[index] == holder)
			{
				index = 0;
				h_index++;
				index++;
				holder = tab[h_index];
				continue ;
			}
			
			index++;
		}
		return (holder);
	}
}

int main()
{
	int arr[] = {1, 1, 3, 2, 4, 3, 4};
	printf("%d\n", ft_unmatch(arr, 7));
	return 0;
}
