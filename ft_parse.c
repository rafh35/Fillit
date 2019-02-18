/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_parse.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 10:59:11 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/18 18:42:08 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

char			*read_file(int fd, char *str, char **argv)
{
	int			nbr_oct;
	char		buff[BUFF_SIZE + 1];
	char		*tmp;

	fd = open(argv[1], O_RDONLY);
	while ((nbr_oct = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nbr_oct] = '\0';
		tmp = str;
		str = ft_strjoin(tmp, buff);
		free(tmp);
	}
	return (str);
}

static	int		ft_is_it_valid(char *str, int i, int k)
{
	int			j;

	if (!(str[i]) || ft_nbr_bloc(str) > 26)
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i] == '#' || str[i] == '.')
		{
			j++;
			i++;
		}
		if (j != 4 || !(str[i] == '\n' || str[i] == '\0'))
			return (0);
		k++;
		if ((str[i + 1] != '.' && str[i + 1] != '#') || str[i] == '\0')
		{
			if (k != 4 || (str[i + 1] == '\n' && str[i + 2] == '\0'))
				return (0);
			k = 0;
		}
		if (str[i] == '\n')
			i += (str[i + 1] == '\n' ? 2 : 1);
	}
	return (1);
}

int				ft_check_error(char *str)
{
	int			check;

	check = ft_is_it_valid(str, 0, 0);
	if (check == 0)
	{
		ft_putstr("error\n");
		exit(0);
	}
	else if ((ft_nbr_bloc(str) * 4) != ft_nbr_diese(str))
	{
		ft_putstr("error\n");
		exit(0);
	}
	return (check);
}
