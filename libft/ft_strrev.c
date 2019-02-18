/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 19:29:45 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 19:55:06 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	char	tmp;
	int		len;

	len = ft_strlen(str);
	i = 0;
	while (i < len - 1)
	{
		tmp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = tmp;
		i++;
		len--;
	}
	return (str);
}
