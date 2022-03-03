
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
int is_mynumber_valide(char *s)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
         if(s[i] == '.')
            j++;
        if(!((s[i] >= 48 && s[i] <= 57) || (s[i] == '.' || s[i] == '-')))
        {
            printf("\t-invalid input!!!\n");
            printf("\t-your input should contain just numbers and (.)\n");
            printf("\t-replace (,) with (.)\n");
            return 0;
        }
        i++;
    }
    if(j > 1)
    {
        printf("\t-invalid input!! (.) exists only one time!!\n");
        return 0;
    }
    return 1;
}