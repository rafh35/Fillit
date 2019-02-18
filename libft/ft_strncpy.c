/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 11:49:04 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 18:02:49 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, size_t nbr)
{
	size_t		i;

	i = 0;
	while (src[i] && i < nbr)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < nbr)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
