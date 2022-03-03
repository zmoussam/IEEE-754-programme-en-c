
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

int	is_binary_valid(char *s, short x)
{
	int	i;
	for (i = 0 ; s[i]; i++)
	{
		if (s[i] < 48 || s[i] > 49)
		{
			printf("\t-Your number should be constructed with 0 and 1 only!!!\n");
			printf("\t-If simple precision --> 32 bites!!!\n");
			printf("\t-If double precision --> 64 bites!!!\n\n");
			return 0;
		}
	}
	i = 1;
	if (s[1] == '1')
	{
		while (s[i] == '1' && i <= x)
			i++;
	}
	else
	{
		while ( s[i] == '0' && i <= x)
			i++;
	}
	if(i == x + 1)
	{
		printf("\t-NaN : numbre invalid \n");
		printf("\t-composant 11111111...  interdit \n");
		printf("\t-composant 00000000...  interdit \n");
		return (0);
	}
	return (1);
}
