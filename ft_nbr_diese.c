/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_nbr_disese.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 12:10:49 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 09:24:52 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nbr_diese(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			count++;
		i++;
	}
	return (count);
}
