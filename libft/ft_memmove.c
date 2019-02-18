/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 12:03:03 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 12:20:32 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbr)
{
	char	*tab;

	tab = ft_strnew(nbr);
	if (tab)
	{
		tab = ft_memcpy(tab, src, nbr);
		dest = ft_memcpy(dest, tab, nbr);
	}
	return (dest);
}
