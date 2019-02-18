/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 16:29:16 by maberkan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/18 18:56:39 by maberkan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 100

# include "./libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_parse
{
	char			bloc[4][4];
	int				x;
	int				y;
}					t_parse;

typedef struct		s_all
{
	t_parse			tab[26];
	int				nbr_bloc;
	char			**map;
	int				tm;
	char			c;
}					t_all;

char				*read_file(int fd, char *str, char **argv);
int					ft_check_error(char *str);
int					ft_nbr_bloc(char *str);
int					ft_nbr_diese(char *str);
void				*stock_tet(t_all *t, char *str);
char				**ft_resolve(t_all *al, char c, int a);
int					taille_map(t_all *al, char *str);
void				ft_map_point(t_all *al);
void				print_map(t_all *al, int a);
int					x_pos(t_all *al, int a);
int					y_pos(t_all *al, int a);
void				ft_malloc_map(t_all *al);

#endif
