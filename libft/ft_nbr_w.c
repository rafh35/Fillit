/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_nbr_w.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 16:48:08 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 18:24:20 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr_w(char const *s, char c)
{
	int		i;
	int		nbr_w;

	nbr_w = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			nbr_w += 1;
			while (s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nbr_w);
}
