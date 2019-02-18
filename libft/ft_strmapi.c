/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:45:01 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 19:43:31 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		tab[i] = f(i, ss[i]);
		i++;
	}
	return (tab);
}
