/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 14:43:38 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 14:59:11 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ls;

	if (!(ls = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	if (!content)
	{
		ls->content = NULL;
		ls->content_size = 0;
	}
	else
	{
		ls->content = malloc(content_size);
		ls->content = ft_memcpy(ls->content, content, content_size);
		ls->content_size = content_size;
	}
	ls->next = NULL;
	return (ls);
}
