/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 16:35:28 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:29:15 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**str;
	int		j;
	int		k;
	int		l;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = ft_memalloc(sizeof(char *) * (ft_nbr_w(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		l = i;
		j = 0;
		while (s[i] != c && s[i] && ++i)
			j++;
		if (j)
			str[k++] = ft_strndup(s + l, j);
	}
	return (str);
}
