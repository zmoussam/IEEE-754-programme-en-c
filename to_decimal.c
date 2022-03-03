
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

static int CharToDec(char c)
{
  if (c >= '0' && c <= '9') return (c-'0');
  if (c >= 'a' && c <= 'f') return (c-'a' + 10);
  if (c >= 'A' && c <= 'F') return c-'A' + 10;
  return (0);
}

int	to_decimal(char H[], int typedebase)
{
	char	*P;
	int	p = 1, d = 0;
	for (P=H;*P;P++);
	for(P--;P>=H;P--)
	{
		d = d + (CharToDec(*P) * p);
		p =  p*typedebase;
	}
	return (d);
}
