/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 01:19:17 by user42            #+#    #+#             */
/*   Updated: 2021/07/15 19:32:19 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "libft.h"

typedef struct		s_vect
{
	int				num;
	struct s_vect	*next;
}				t_vect;
typedef struct s_all
{
	int		*vector_a;
	int		*vector_b;
	int		posic;
	int		qtt_a;
	int		qtt_b;
	int		qtt_t;
	int		first_a;
	int		second_a;
	char*	com[500];
	int		qtt_com;
}				t_all;

void	s_a(t_all *all);
void	s_b(t_all *all);
void	r_a(t_all *all);
void	r_b(t_all *all);
void	r_r_a(t_all *all);
void	r_r_b(t_all *all);
int		verify_a(t_all *all);
int		verify_a(t_all *all);
void	find_first_second (t_all *all);
void	print_a (t_all *all);
void	print_f (t_all *all);
void	print_b (t_all *all);
int		move_top(t_all *all, int posic, int mv);
void	push_b(t_all *all);
void	kill_a(t_all *all);
void	order_3(t_all *all);
void	kill_b(t_all *all);
void	org_a(t_all *all);
void	push_a(t_all *all);
void	back_a(t_all *all);
void	find_diff(t_all*all);
void	bye(t_all *all);
size_t	size_num(int num);
int		checker_num(t_all *all, int num);

t_vect	*ft_lstnew2(int num);
int		ft_lstsize2(t_vect *lst);
void	ft_lstadd_back2(t_vect **lst, t_vect *new);
t_vect	*ft_lstlast2(t_vect *lst);

#endif
