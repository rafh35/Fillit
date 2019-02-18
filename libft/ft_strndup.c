/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 18:18:30 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:36:18 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char		*str;
	size_t		len;
	size_t		i;

	len = ft_strlen(src);
	if (!(str = ft_memalloc(len)))
		return (NULL);
	i = 0;
	while (i < n && src && str)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
