/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 15:31:18 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 16:25:53 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strstr(const char *str, const char *tofind)
{
	int	i;
	int	j;
	int	find;

	if (!(tofind[0]))
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == tofind[j])
		{
			find = i;
			while (tofind[j] && str[i] == tofind[j])
			{
				i++;
				j++;
			}
			i = find;
		}
		if (tofind[j] == '\0')
			return ((char *)&str[find]);
		i++;
	}
	return (NULL);
}
