/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 11:00:00 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 11:09:23 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t nbr)
{
	unsigned char	var;
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	var = (unsigned char)c;
	tmp = (unsigned char *)str;
	while (i < nbr)
	{
		if (*tmp == var)
			return (tmp);
		tmp++;
		i++;
	}
	return (NULL);
}
