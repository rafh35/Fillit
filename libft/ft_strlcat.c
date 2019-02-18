/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 12:23:03 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 12:59:47 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ln_dst;
	size_t	ln_src;

	i = 0;
	ln_dst = (size_t)ft_strlen(dest);
	ln_src = (size_t)ft_strlen(src);
	if (size <= ln_dst)
		return (ln_src + size);
	while (dest[i] != '\0' && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (ln_src + ln_dst);
}
