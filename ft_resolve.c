/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_resolve.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/12 09:29:04 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/20 10:28:30 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void		ft_putsol(t_all *t, int line, int col, int a)
{
	int		i;
	int		j;
	int		x;
	int		y;

	x = x_pos(t, a);
	i = line;
	while (i < t->tm && x < 4)
	{
		j = col;
		y = y_pos(t, a);
		while (j < t->tm && y < 4)
		{
			if (t->tab[a].bloc[x][y] == '#' && t->map[i][j] == '.')
				t->map[i][j] = 'A' + a;
			j++;
			y++;
		}
		i++;
		x++;
	}
}

void		del_tet(t_all *al, int a)
{
	int		x;
	int		y;

	x = 0;
	while (x < al->tm)
	{
		y = 0;
		while (y < al->tm)
		{
			if (al->map[x][y] == 'A' + a)
				al->map[x][y] = '.';
			y++;
		}
		x++;
	}
}

int			check_place(t_all *al, int line, int col, int a)
{
	int		i;
	int		j;
	int		x;
	int		y;

	x = x_pos(al, a);
	i = line;
	j = col;
	if (i + al->tab[a].y > al->tm || j + al->tab[a].x > al->tm)
		return (0);
	while (i < al->tm && x < 4)
	{
		j = col;
		y = y_pos(al, a);
		while (j < al->tm && y < 4)
		{
			if (al->map[i][j] != '.' && al->tab[a].bloc[x][y] == '#')
				return (0);
			j++;
			y++;
		}
		x++;
		i++;
	}
	return (1);
}

void		print_map(t_all *al)
{
	int		i;
	int		j;

	i = 0;
	while (i < al->tm)
	{
		j = 0;
		while (j < al->tm)
		{
			ft_putchar(al->map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void		fill_for_norm(t_all *t, int a)
{
	int		i;
	int		j;
	int		x;

	x = 0;
	i = -1;
	while (++i < 4 && x < 4)
	{
		j = -1;
		while (++j < 4 && x < 4)
		{
			if (t->tab[a].bloc[i][j] == '#')
				x++;
			if (t->tab[a].bloc[i][j] == '#' && t->tab[a].bloc[i][j + 1] == '#')
				t->tab[a].x++;
			if (t->tab[a].bloc[i][j] == '#' && t->tab[a].bloc[i + 1][j] == '#')
				t->tab[a].y++;
		}
	}
}
