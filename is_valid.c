
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

int	is_valid(char *nbr)
{
	int	i;
	int	j;
	j = 0;
	while (nbr[j] <= 32)
		j++;
	for (i = j; nbr[i]; i++)
	{
		if (nbr[i] < 49 || nbr[i] > 50)
		{
			printf("choose (1) or (2)!!!!\n");
			return (0);
		}
	}
	return (1);
}
