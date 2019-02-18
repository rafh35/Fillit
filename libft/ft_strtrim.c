/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 13:03:24 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 19:44:10 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tab;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i]) && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = ft_strlen((char *)s) - 1;
	while ((s[j]) && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	if (s[i] == '\0')
	{
		if (!(tab = ft_strnew(1)))
			return (NULL);
		*tab = '\0';
		return (tab);
	}
	if (!(tab = ft_strsub(s, i, j - i + 1)))
		return (NULL);
	tab[j - i + 1] = '\0';
	return (tab);
}
