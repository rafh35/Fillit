/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 17:01:24 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:31:43 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	int			pn;
	long int	res;

	res = 0;
	i = 0;
	pn = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' ||
			str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		pn = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	if (pn == 1)
		res = -res;
	return (res);
}
