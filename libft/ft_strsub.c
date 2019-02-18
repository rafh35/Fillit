/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 12:37:37 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/18 15:03:15 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(tab = ft_strnew((len))))
		return (NULL);
	while (s[start] && i < len)
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	return (tab);
}
