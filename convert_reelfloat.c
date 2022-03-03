
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

char	*convert_reelfloat(float f, int nbr_de_bits)
{
	int		i;
	int		j;
	char	*s;
	j = 0;
	i = 0;
    s  = (char *)malloc((nbr_de_bits + 1) * sizeof(char));
	while (j < nbr_de_bits)
	{
		f = f * 2;
		if (f > 1)
		{
			f = f - 1;
			s[j] = '1';
			j++;
		}
		else if (f < 1)
		{
			s[j] = '0';
			j++;
		}
		if (f == 1)
		{
			s[j] = '1';
			j++;
			while (j < nbr_de_bits)
			{
				s[j] = '0';
				j++;
			}
		}
	}
	s[j] = '\0';
	return (s);
}
