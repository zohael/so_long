/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-harb <zel-harb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:21:37 by zel-harb          #+#    #+#             */
/*   Updated: 2024/03/14 01:41:57 by zel-harb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_LONG_h
# define S_LONG_h

# include <fcntl.h>
# include <limits.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

typedef struct s_img
{
	int		count;
	int		len;
	char	**str;
	char	**str_copy;
	int		x_pxl;
	int		y_pxl;
	void	*mlx;
	void	*mlx_win;
	void	*img_wall;
	void	*img_player;
	void	*img_empty;
	void	*img_coll;
	void	**img_exit;
	int		count_coll;
	int		x_pos;
	int		y_pos;
	int		x_player;
	int		y_player;
	int		count_moves;
}			t_img;

int			ft_strchr_int(char **s, char c, int size);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strchr(char *s, int c);
size_t		ft_strlen(char *str);
char		*get_next_line(int fd);
int			ft_strchr_int(char **s, char c, int size);
int			check_ber(char *argv, int argc);
int			check_map(t_img **read);
char		**ft_split(char const *s, char c);
int			count_words(char const *s, char c);
void		full_str(t_img **read_m, char *argv);
void		put_img(t_img **img);
void		print_window(t_img **img);
int			check_first_last(char *line);
int			check_mid(char *line);
void		ft_moves(t_img **img);
int			close_win(int keycode, t_img *var);
int			delete_window(void *param);
int 		check_line(char *argv);

#endif