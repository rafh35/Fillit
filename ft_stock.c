/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_stock.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 13:30:25 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/18 17:35:29 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

t_parse		ft_tetri_bloc(char *str, int *x)
{
	int		i;
	int		j;
	t_parse p;

	p.x = 0;
	i = 0;
	j = 0;
	while (j < 4)
	{
		p.y = 0;
		while (str[i] && str[i] != '\n')
		{
			p.bloc[p.x][p.y] = str[i];
			p.y++;
			if (str[i] == '\n' && str[i + 1] == '\n')
				break ;
			i++;
		}
		p.bloc[p.x][p.y] = '\0';
		p.x++;
		i++;
		j++;
	}
	*x = i;
	return (p);
}

int				y_pos(t_all *al, int a)
{
	int		i;
	int		j;
	int		y;

	i = 0;
	y = 4;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (al->tab[a].bloc[i][j] == '#' && j < y)
				y = j;
			else
				j++;
		}
		i++;
	}
	return (y);
}

int				x_pos(t_all *al, int a)
{
	int		i;
	int		j;
	int		x;

	j = 0;
	x = 4;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (al->tab[a].bloc[i][j] == '#' && i < x)
				x = i;
			else
				i++;
		}
		j++;
	}
	return (x);
}

void		*stock_tet(t_all *t, char *str)
{
	int		x;
	int		i;

	t->nbr_bloc = ft_nbr_bloc(str);
	i = 0;
	while (i < t->nbr_bloc)
	{
		t->tab[i] = ft_tetri_bloc(str, &x);
		str = ft_strsub(str, x + 1, ft_strlen(str) - (x - 1));
		i++;
	}
	return (t);
}
