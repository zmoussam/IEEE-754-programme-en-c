#include "programme3.h"

void	ca2(int t[], int nb, int ds)
{
	int	r;
	int	k;
	int	j;
	int	i;
	int	*t1;

	t1 = t;
	j = 0;
	i = 0;
	printf("\n");
	for (k = nb - 1; k >= 0; k--)
	{
		if (t1[k] == 1)
		{
			r = k;
			break ;
		}
	}
	for (j = r - 1; j > 0; j--)
	{
		if (t1[j] == 1)
			t1[j] = 0;
		else if (t1[j] == 0)
			t1[j] = 1;
	}
	printf("le Complement a 2 de %d est: ", ds);
	i = 0;
	for (i = 0; i < nb; i++)
		printf("%d", t1[i]);
}
