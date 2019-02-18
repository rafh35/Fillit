/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 16:26:24 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/20 08:28:08 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	find;

	if (!(tofind[0]))
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == tofind[j])
		{
			find = i;
			while (tofind[j] && str[i] == tofind[j] && i++ < len)
				j++;
			i = find;
		}
		if (tofind[j] == '\0')
			return ((char *)&str[find]);
		find = 0;
		i++;
	}
	return (NULL);
}
