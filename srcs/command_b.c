/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:38:08 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 19:16:39 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_b(t_all *all)
{
	int	aux;

	aux = all->vector_b[0];
	all->vector_b[0] = all->vector_b[1];
	all->vector_b[1] = aux;
	all->com[all->qtt_com] = ft_strdup("sb\n");
	all->qtt_com++;
}

void	move_up_b(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_b)
	{
		all->vector_b[i] = all->vector_b[i + 1];
		i++;
	}
}

void	move_down_b(t_all *all)
{
	int	i;

	i = all->qtt_b;
	while (i >= 0)
	{
		all->vector_b[i + 1] = all->vector_b[i];
		i--;
	}
	all->qtt_b++;
}

void	push_b(t_all *all)
{
	move_down_b(all);
	all->vector_b[0] = all->vector_a[0];
	all->com[all->qtt_com] = ft_strdup("pb\n");
	all->qtt_com++;
	move_up_a(all);
	all->qtt_a--;
}
