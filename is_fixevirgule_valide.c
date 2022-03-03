
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
int	is_fixevirgule_valide(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '.')
			j++;
		if (!((s[i] >= 48 && s[i] <= 49) || s[i] == '.'))
		{
			printf("\t-Your number should be in this form \n exemple : 0101110.1101101 !!!!!!\n");
			printf("\t-Your number should be in base 2\n");
			printf("\t-replace (,) with (.)\n");
			return (0);
		}
		i++;
	}
	if (j > 1)
	{
		printf("\t-Warning !!! you put (.) more than once!!\n");
		return (0);
	}
	return (1);
}
