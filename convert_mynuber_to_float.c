
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

double	convert_mynumber_to_float(char *s)
{
	int		i;
	int		j;
	int		k;
	char	s1[100];
	char	s2[100];
	double	d1;
	double	d2;
	double	d;

	k = my_own_strlen(s);
	i = 0;
	j = 0;
	d2 = 0;
	while (s[i] != '.' && s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	d1 = my_own_atoi(s1);
	if (i != k)
	{
		i += 1;
		while (s[i])
		{
			s2[j] = s[i];
			i++;
			j++;
		}
		s2[j] = '\0';
		d2 = my_own_atoi(s2) * pow(10, -j);
	}
	if (d1 < 0)
	{
		d1 *= -1;
		d = d1 + d2;
		d *= -1;
	}
	else
		d = d1 + d2;
	return (d);
}
