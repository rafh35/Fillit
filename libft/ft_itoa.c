/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 18:35:39 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:22:48 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (n == -2147483648)
		return (tab = ft_strdup("-2147483648"));
	if (!(tab = ft_memalloc(sizeof(char) * (ft_nbr_nbr(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n >= 10)
	{
		tab[i++] = (n % 10) + '0';
		n = n / 10;
	}
	tab[i] = n + '0';
	if (neg == 1)
		tab[++i] = '-';
	return (ft_strrev(tab));
}
