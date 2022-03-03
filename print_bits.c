
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

void	print_bits(void *buf, int size_in_bytes)
{
	char	*ptr = (char *)buf;
	int		i;
	short	j;

	for (i = size_in_bytes; i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			printf("%d", (ptr[i] >> j) & 1);
		}
		printf(" ");
	}
	printf("\n");
}
