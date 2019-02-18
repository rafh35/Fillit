/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 12:48:51 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 17:32:15 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;

	if (!s1 || !s2)
		return (NULL);
	tab = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if (tab)
	{
		ft_strcpy(tab, (char *)s1);
		ft_strcat(tab, (char *)s2);
	}
	else
		return (NULL);
	return (tab);
}
