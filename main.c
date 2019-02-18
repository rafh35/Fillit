/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 11:23:40 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/18 18:56:47 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char **argv)
{
	char	*str;
	t_all	*al;

	al = malloc(sizeof(t_all));
	if (argc == 2)
	{
		str = ft_strnew(1);
		str = read_file(0, str, argv);
		ft_check_error(str);
		stock_tet(al, str);
		taille_map(al, str);
		ft_malloc_map(al);
		ft_map_point(al);
		print_map(al, 0);
	}
	else
		ft_putstr("usage: ./fillit source_file\n");
	return (0);
}
