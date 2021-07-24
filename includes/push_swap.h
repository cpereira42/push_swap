/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 01:19:17 by user42            #+#    #+#             */
/*   Updated: 2021/07/24 09:17:32 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "libft.h"

# define NUMX 10

typedef struct s_vect
{
	int				num;
	struct s_vect	*next;
}					t_vect;

typedef struct s_all
{
	int			*vector_a;
	int			*vector_b;
	int			*vector_o;
	int			posic;
	int			qtt_a;
	int			qtt_b;
	int			qtt_t;
	int			first_a;
	int			second_a;
	char		*com[50000];
	int			num_posic[NUMX];
	int			qtt_com;
	int			mult;
}				t_all;

void			s_a(t_all *all);
void			s_b(t_all *all);
void			r_a(t_all *all);
void			r_b(t_all *all);
void			r_r_a(t_all *all);
void			r_r_b(t_all *all);
void			push_a(t_all *all);
void			push_b(t_all *all);
void			back_a(t_all *all);
void			move_up_a(t_all *all);
void			move_up_b(t_all *all);
void			move_down_a(t_all *all);
void			move_down_b(t_all *all);
void			print_f(t_all *all);

int				verify_a(t_all *all);
void			number_five(t_all *all);
void			find_first(t_all *all);

int				move_top(t_all *all, int posic, int mv);
void			order_3(t_all *all);
void			bye(t_all *all);
size_t			size_num(int num);
int				checker_num(t_all *all, int num);
void			more_hun(t_all *all);
void			first_passag(t_all *all);
void			change_position(t_all *all);
void			sort(t_all *all);
void			reset_flags(t_all *all, int argc);
int				verify_args(t_all *all, int argc, char **argv);

size_t			ft_strlen(const char *frase);
void			ft_bzero(void *s, int tamanho);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
char			*ft_strdup(const char *s1);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

void			print_a(t_all *all);
void			print_b(t_all *all);
void			print_c(t_all *all);

#endif
