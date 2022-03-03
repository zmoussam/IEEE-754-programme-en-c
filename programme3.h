
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

#ifndef PROGRAMME3_H
#define PROGRAMME3_H

# include<stdio.h>
# include<stdlib.h>
# include <math.h>

char	*my_own_strrev(char *str);
size_t	my_own_strlen(const char *str);
char	*my_own_strjoin(char const *s1, char const *s2);
char	*convert_reelfloat(float f,int nbr_de_bits);
void	print_bits ( void* buf, int size_in_bytes);
int		my_own_atoi(const char *str);
int		is_valid(char *nbr);
int		to_decimal(char H[], int typedebase);
long double	convert_floatevirgule(char *s,short exposant,short ex,short sim_or_double);
int		is_binary_valid(char *s,short x);
int		is_fixevirgule_valide(char *s);
long double	convert_fixe_virgule(char *s);
int		is_mynumber_valide(char *s);
double	convert_mynumber_to_float(char *s);

#endif 
