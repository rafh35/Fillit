/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:25:57 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 19:45:05 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*tab;
	char	*ss;

	if (!s)
		return (NULL);
	ss = (char *)s;
	if (!(tab = ft_strnew(ft_strlen(ss))))
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		tab[i] = f(ss[i]);
		i++;
	}
	return (tab);
}
