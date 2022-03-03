
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

long double	convert_floatevirgule(char *s, short exposant, short ex, short sim_or_double)
{
	int i;
	int j;
	int d1;
	int	x;
	long double	d3;
	double	d2;
	char	tmp[64];
	char	tmp2[64];
	i = 1;
	j = 0;
	while (i <= exposant)
	{
		tmp[j] = s[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	d1 = to_decimal(tmp,2);
	d1 = d1 - ex;
	tmp2[0] = '1';
	j = 1;
	while (i <= exposant + d1)
	{
		tmp2[j] = s[i];
		i++;
		j++;
	}
	tmp2[j] = '\0';
	d2 = to_decimal(tmp2, 2);
	j = 1;
	d3 = 0;
	while (i < sim_or_double)
	{
		d3 = d3 + (double)(s[i] - '0') * pow(2, -j);
		i++;
		j++;
	}
	d3 = d3 + d2;
	if (s[0] == '1')
		d3 = d3 * (-1);
	return (d3);
}
