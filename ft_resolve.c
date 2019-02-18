/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_resolve.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/12 09:29:04 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/18 19:11:34 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int			taille_map(t_all *al, char *str)
{
	int		nbr;

	nbr = ft_nbr_bloc(str);
	al->tm = ft_sqrt(nbr * 4);
	return (al->tm);
}

void		ft_malloc_map(t_all *al)
{
	int		i;

	i = 0;
	if (!(al->map = (char**)ft_memalloc(sizeof(char*) * al->tm)))
		return ;
	while (i < al->tm)
	{
		al->map[i] = (char*)ft_memalloc(sizeof(char) * al->tm);
	//	al->map[i][al->tm] = '\0';
		i++;
	}
	al->map[i] = 0;
}

void		ft_map_point(t_all *al)
{
	int		i;
	int		j;

	i = 0;
	while (i < al->tm)
	{
		j = 0;
		while (j < al->tm)
		{
			al->map[i][j] = '.';
			j++;
		}
		i++;
	}
}

void		ft_putsol(t_all *al, int a, char c)
{
	int		i;
	int		j;
	int		x;
	int		y;

	x = x_pos(al, a);
	y = y_pos(al, a);
	i = 0;
	while (i < al->tm)
	{
		j = 0;
		while (j < al->tm - 1)
		{
			al->map[i][j] = al->tab[a].bloc[x + i][y + j];
				if (al->map[i][j] == '#')
					al->map[i][j] = c;
			j++;
		}
		i++;
	}
}

void		print_map(t_all *al, int a)
{
	char	c;

	c = 'A';
	while (a < al->nbr_bloc)
	{
		ft_putsol(al, a, c);
		a++;
		c++;
	}
	a = 0;
	while (a < al->tm)
	{
		ft_putstr(al->map[a]);
		ft_putchar('\n');
		a++;
	}
}
