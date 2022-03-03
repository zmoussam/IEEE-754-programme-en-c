
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
char	*my_own_strjoin(char const *s1, char const *s2)
{
	unsigned int	size_s1;
	unsigned int	size_s2;
	char			*new;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (0);
	size_s1 = my_own_strlen(s1);
	size_s2 = my_own_strlen(s2);
	new = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size_s1 + size_s2)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}