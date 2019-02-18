/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 19:19:55 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 20:38:45 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*fr;

	if ((!lst || !f) || (!(fr = f(lst))))
		return (NULL);
	tmp = fr;
	lst = lst->next;
	while (lst)
	{
		if (!(fr->next = f(lst)))
			return (NULL);
		lst = lst->next;
		fr = fr->next;
	}
	return (tmp);
}
