/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 08:49:10 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/11 11:08:03 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*read_line(char *str, const int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		nbr_oct;
	char	*tmp;

	while (!ft_strchr(str, '\n') && (nbr_oct = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nbr_oct] = '\0';
		tmp = str;
		str = ft_strjoin(tmp, buff);
		free(tmp);
	}
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	int			i;
	static char	*str[0];
	char		*tmp;

	if (fd < 0 || line == NULL || read(fd, *line, 0) < 0 || BUFF_SIZE < 1)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	str[fd] = read_line(str[fd], fd);
	i = 0;
	while (str[fd][i])
	{
		while (str[fd][i] != '\n' && str[fd][i] != '\0')
			i++;
		if (str[fd][i] == '\n' || str[fd][i] == '\0')
		{
			*line = ft_strsub(str[fd], 0, i);
			tmp = str[fd];
			str[fd] = ft_strsub(tmp, i + 1, ft_strlen(tmp) - i);
			free(tmp);
			return (1);
		}
	}
	*line = NULL;
	return (0);
}
