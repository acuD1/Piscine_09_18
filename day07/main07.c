#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int 	*ft_ultimate_range(int **range, int min, int max);

int		main(int ac, char **av)
{
	int *tab;
	int *ptr;
	int i;
	
	i = 0;
	tab = ft_ultimate_range(&ptr, atoi(av[1]), atoi(av[2]));
	if (ac < 2)
		return (0);
	while (i < (atoi(av[2]) - atoi(av[1])))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
	
}

/*
int 	*ft_range(int min, int max);

int		main(int ac, char **av)
{
	int *tab;
	int i;
	
	i = 0;
	tab = ft_range(atoi(av[1]), atoi(av[2]));
	if (ac < 2)
		return (0);
	while (i < (atoi(av[2]) - atoi(av[1]))) 
		printf("%d\n", tab[i++]);
	return (0);
	
}
*/
