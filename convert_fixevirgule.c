
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
long double	convert_fixe_virgule(char *s)
{
	int			i = 0;
	int			j = 0;
	int			k = 1;
	char		d1[100];
	char		d2[100];
	long double	d;
	while (s[i] != '.')
	{
		d1[i] = s[i];
		i++;
	}
	d1[i] = '\0';
	d = to_decimal(d1, 2);
	i += 1;
	while (s[i])
	{
		d2[j] = s[i];
		i++;
		j++;
	}
	d2[j] = '\0';
	i = 0;
	while (i < j)
	{
		d = d + (double)(d2[i] - '0') * pow(2, -k);
		i++;
		k++;
	}
	return d;
}
