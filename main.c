
/* ************************************************************************** */
/*                                                                            */
/*                                                   ########  ######  ###### */
/*   programme_AO3                                  #         #          #    */
/*                                                 #######   ######     #     */
/*   By: moussammi <moussammi.fst@uhp.ah.ma>      #              #     #      */
/*       Zakaria                                 #          #####     #       */
/*   Created: 2021/12/19 21:05:12 by zmoussam                                 */
/*   Updated: 2021/12/19 21:09:00 by zmoussam                                 */
/*                                                                            */
/* ************************************************************************** */

#include "programme3.h"

int	main()
{
	double my_number;
	char s1[1000];
	char s2[1000];
	char s3[1000];
	char s[1000];
	char mynumber[100];
	int x;
	int w;
	int y;
	int i;
	i = 0;
	int z;
	int j;
	printf("------------------------------hello------------------------------- \n\n");
	printf("do you want to convert (1) :float-->binary or (2) :binary-->float \n\n");
	printf("\t(1) : float-->bianry\n \t(2) : binary-->float ");
	scanf("%s",s1);
	while (is_valid(s1) == 0)
		scanf("%s", s1);
	z = my_own_atoi(s1);
	if (z == 1)
	{
		printf("input your number : ");
		scanf("%s", mynumber);
		while (is_mynumber_valide(mynumber) == 0)
			scanf("%s", mynumber);
		my_number = convert_mynumber_to_float(mynumber);
		printf("-virgule fixe or virgule flottante\n");
		printf("\t(1) : virgule fixe \n");
		printf("\t(2) : virgule flottante\n" );
		scanf("%s", s3);
		while (is_valid(s3) == 0)
			scanf("%s", s3);
		x = my_own_atoi(s3);
		if (x == 1)
		{
			long	nbr = my_number;
			char	*t ;
			t = (char*)malloc(100 * sizeof(char));
			double	nbrf = (my_number - nbr);
			int		k = 0;
			long	nbr2 = nbr;
			if (nbr < 0)
			{
				nbr = nbr * (-1);
				k = 1;
			}
			j = 0;
			while (nbr != 0)
			{
				w = nbr % 2;
				if (w == 1)
					t[j] = '1';
				else if(w == 0)
					t[j] = '0';
				nbr = nbr / 2;
				j++;
			}
			t[j] = '\0';
			int	nb;
			printf("pick the amount of bites : ");
			scanf("%d", &nb);
			while (nb / 2 <= j)
			{
				printf("warning : pick another amount of bites : ");
				scanf("%d",&nb);
			}
			int		b = nb / 2;
			if (nb % 2 == 1)
			{
				b = b + 1;
			}
			char	*s;
			if (nbrf < 0)
				nbrf = nbrf * -1;
			s = convert_reelfloat(nbrf,b);
			int		m = (nb / 2) - j;
			char	*p;
			p = (char *)malloc(m  * sizeof(char));
			if (nbr2 >= 0)
			{
				int	l;
				for (l = 0 ;l < m; l++)
				{
					p[l] = '0';
				}
				p[l] = '\0';
			}
			if (nbr2 < 0)
			{
				int		h;
				p[0] = '1';
				for (h = 1 ; h < m; h++)
				{
					p[h] = '0';
				}
				p[h] = '\0';
			}
			char	*t_total;
			t_total = my_own_strjoin(p,my_own_strrev(t));
			char	*t_total2;
			t_total2 = my_own_strjoin(my_own_strjoin(t_total,"."),s);
			printf("%s",t_total2);
		}
		if (x == 2)
		{
			printf("you want to convert this number to (1):simle precision or to (2):double precision\n");
			printf("\t(1) : simple precision \n\t(2) : double precision \n");
			scanf("%s", s2);
			while (is_valid(s2) == 0)
				scanf("%s", s2);
			y = my_own_atoi(s2);
			if (y == 1)
			{
				float	my_fnumber = my_number;
				printf("The representation of your float number in binary is\n");
				print_bits(&my_fnumber,3);
			}
			else
			{
				printf("The representation of your float number in binary is\n");
				print_bits(&my_number,7);
			}
		}
	}
	if (z == 2)
	{
		printf("(1) : virgule fixe or (2) : virgule flottante\n");
		printf("\t(1) : virgule fixe \n");
		printf("\t(2) : virgule flottante \n");
		scanf("%s", s3);
		while (is_valid(s3) == 0)
			scanf("%s", s3);
		x = my_own_atoi(s3);
		if (x == 1)
		{
			printf("input your number : ");
			scanf("%s",s);
			while (is_fixevirgule_valide(s) == 0)
				scanf("%s", s);
			printf("The representation of your binary in decimal is : \n");
			printf("%s = %Lf \n", s, convert_fixe_virgule(s));
		}
		if (x == 2)
		{
			printf("\t(1) : simple precision \n\t(2) : double precision \n");
			scanf("%s", s2);
			while (is_valid(s2) == 0)
				scanf("%s", s2);
			y = my_own_atoi(s2);
			if (y == 1)
			{
				printf("input binary number : (32 bits) ");
				scanf("%s", s);
				while (is_binary_valid(s,8) == 0 || my_own_strlen(s) != 32)
				{
					printf("\tsize = %zu !!\n",my_own_strlen(s));
					scanf("%s",s);
				}
				printf("The representation of your binary (simple precision) in decimal is :\n");
				printf("%s = %Lf\n",s,convert_floatevirgule(s, 8,127, 32));
			}
			if (y == 2)
			{
				printf("input binary number : (64 bits) ");
				scanf("%s", s);
				while (is_binary_valid(s,11) == 0 || my_own_strlen(s) != 64)
				{
					i = 1;
					printf("size = %zu !!!! \n",my_own_strlen(s));
					scanf("%s", s);
				}
				printf("The representation of your binary (double precision) in decimal is : \n");
				printf("%s = %Lf\n", s,convert_floatevirgule(s, 11,1023,64));
			}
		}
	}
		return (0);
}
