/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 13:21:08 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 13:35:11 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *)str;
	i = ft_strlen(tmp);
	c = (unsigned char)c;
	while (tmp[i] != c && i >= 0)
		i--;
	if (c == tmp[i])
		return (&tmp[i]);
	return (NULL);
}
