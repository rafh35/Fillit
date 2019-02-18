/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 17:30:29 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 17:30:33 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t nbr)
{
	size_t			i;
	unsigned char	*tmpd;
	char			*tmps;

	i = 0;
	tmpd = (unsigned char *)dest;
	tmps = (char *)src;
	while (i < nbr)
	{
		tmpd[i] = tmps[i];
		if (tmpd[i] == (unsigned char)c)
			return (tmpd + i + 1);
		i++;
	}
	return (NULL);
}
