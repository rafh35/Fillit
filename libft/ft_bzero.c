/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 09:56:43 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 10:09:41 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *tab, size_t nbr)
{
	unsigned char *tmp;

	tmp = (unsigned char *)tab;
	while (nbr--)
		*tmp++ = (char)'\0';
}
