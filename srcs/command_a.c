/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:42:22 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 19:15:25 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_a(t_all *all)
{
	int	aux;

	aux = all->vector_a[0];
	all->vector_a[0] = all->vector_a[1];
	all->vector_a[1] = aux;
	all->com[all->qtt_com] = ft_strdup("sa\n");
	all->qtt_com++;
}

void	move_down_a(t_all *all)
{
	int	i;

	i = all->qtt_a;
	while (i >= 0)
	{
		all->vector_a[i + 1] = all->vector_a[i];
		i--;
	}
	all->qtt_a++;
}

void	push_a(t_all *all)
{
	move_down_a(all);
	all->vector_a[0] = all->vector_b[0];
	all->com[all->qtt_com] = ft_strdup("pa\n");
	all->qtt_com++;
	move_up_b(all);
	all->qtt_b--;
}

void	move_up_a(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_a)
	{
		all->vector_a[i] = all->vector_a[i + 1];
		i++;
	}
}
