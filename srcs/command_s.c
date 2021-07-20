/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:42:22 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/19 15:36:43 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_a(t_all *all)
{
	int	aux;

	//if (all->vector_a[0] != '\0' && all->vector_a[1] != '\0')
	//{
	aux = all->vector_a[0];
	all->vector_a[0] = all->vector_a[1];
	all->vector_a[1] = aux;
	//}
	all->com[all->qtt_com] = ft_strdup("sa");
	all->qtt_com++;
}

void	s_b(t_all *all)
{
	int	aux;

	if (all->vector_b[all->qtt_b] != '\0'
		&& all->vector_b[all->qtt_b + 1] != '\0')
	{
		aux = all->vector_b[all->qtt_b];
		all->vector_b[all->qtt_b] = all->vector_b[all->qtt_b - 1];
		all->vector_b[all->qtt_b - 1] = aux;
	}
	all->com[all->qtt_com] = ft_strdup("sb");
	all->qtt_com++;
}
