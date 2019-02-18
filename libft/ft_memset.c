/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 18:32:05 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 19:07:22 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *tab, int c, size_t nbr)
{
	unsigned char *tmp;

	if (nbr == 0)
		return (tab);
	tmp = (unsigned char *)tab;
	while (nbr--)
	{
		*tmp = (unsigned char)c;
		if (nbr)
			tmp++;
	}
	return (tab);
}
