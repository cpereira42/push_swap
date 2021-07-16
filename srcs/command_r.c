/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:36:53 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/15 18:39:55 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_r_a(t_all *all)
{
	int	aux;
	int	i;

	i = all->qtt_a - 1;
	aux = all->vector_a[i];
	while (i > 0)
	{
		all->vector_a[i] = all->vector_a[i - 1];
		i--;
	}
	all->vector_a[0] = aux;
	all->com[all->qtt_com] = ft_strdup("rra");
	all->qtt_com++;
}

void	r_r_b(t_all *all)
{
	int	aux;
	int	i;

	i = all->qtt_b - 1;
	aux = all->vector_b[i];
	while (i > 0)
	{
		all->vector_b[i] = all->vector_b[i - 1];
		i--;
	}
	all->vector_b[0] = aux;
	all->com[all->qtt_com] = ft_strdup("rrb");
	all->qtt_com++;
}

void	r_a(t_all *all)
{
	int	aux;
	int	i;

	i = 0;
	aux = all->vector_a[i];
	while (i < all->qtt_a)
	{
		all->vector_a[i] = all->vector_a[i + 1];
		i++;
	}
	all->vector_a[i - 1] = aux;
	all->com[all->qtt_com] = ft_strdup("ra");
	all->qtt_com++;
}

void	r_b(t_all *all)
{
	int	aux;
	int	i;

	i = 0;
	aux = all->vector_b[i];
	while (i < all->qtt_b)
	{
		all->vector_b[i] = all->vector_b[i + 1];
		i++;
	}
	all->vector_b[i - 1] = aux;
	all->com[all->qtt_com] = ft_strdup("rb");
	all->qtt_com++;
}
