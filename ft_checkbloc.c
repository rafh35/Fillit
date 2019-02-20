/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_checkbloc.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/20 10:05:11 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/20 10:05:35 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		checkblock(t_all *t, int x, int b)
{
	int		i;
	int		j;
	int		hash;

	i = -1;
	hash = 0;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (t->tab[x].bloc[i][j] == '#')
			{
				hash++;
				b++;
				if (t->tab[x].bloc[i][j + 1] == '#')
					hash++;
				if (t->tab[x].bloc[i + 1][j] == '#')
					hash++;
			}
		}
	}
	if (hash == 7 && b == 4)
		return (1);
	return (0);
}

int		square(t_all *t, int x, int b)
{
	int		i;
	int		j;
	int		hash;

	i = -1;
	hash = 0;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (t->tab[x].bloc[i][j] == '#')
			{
				hash++;
				b++;
				if (t->tab[x].bloc[i][j + 1] == '#')
					hash++;
				if (t->tab[x].bloc[i + 1][j] == '#')
					hash++;
			}
		}
	}
	if (hash == 8 && b == 4)
		return (1);
	return (0);
}

void		size_tet(t_all *al, int a)
{
	int i;
	int j;

	i = 0;
	al->tab[a].x = 0;
	al->tab[a].y = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (al->tab[a].bloc[i][j] == '#' && al->tab[a].bloc[i + 1][j] == '#')
				al->tab[a].x++;
			if (al->tab[a].bloc[i][j] == '#' && al->tab[a].bloc[i][j + 1] == '#')
				al->tab[a].y++;
			j++;
		}
		i++;
	}
}

void			*fill_xy(t_all *al, int a)
{
	al->tab[a].x = 1;
	al->tab[a].y = 1;
	if (square(al, a, 0))
	{
		al->tab[a].x = 2;
		al->tab[a].y = 2;
	}
	else
		fill_for_norm(al, a);
	return (al);
}
