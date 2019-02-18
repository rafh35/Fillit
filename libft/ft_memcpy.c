/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 10:10:14 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 10:18:04 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nbr)
{
	char	*tmpd;
	char	*tmps;

	tmpd = (char *)dest;
	tmps = (char *)src;
	while (nbr--)
		*(unsigned char *)tmpd++ = *(unsigned char *)tmps++;
	return (dest);
}
