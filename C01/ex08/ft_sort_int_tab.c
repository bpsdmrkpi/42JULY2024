#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	while(size > 1)
	{
		i = 0;
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;	
		}
		size--;		
	}
}
