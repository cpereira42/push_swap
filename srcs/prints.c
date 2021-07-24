/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:57:03 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 19:19:18 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_f(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->qtt_com)
	{
		ft_putstr_fd(all->com[i], 1);
		i++;
	}
}

void	print_a(t_all *all)
{
	int	i;

	i = 0;
	ft_putstr_fd("Vector A\n", 1);
	while (i < all->qtt_a)
	{
		ft_putnbr_fd(all->vector_a[i], 1);
		ft_putstr_fd("\n", 1);
		i++;
	}
}

void	print_b(t_all *all)
{
	int	i;

	i = 0;
	ft_putstr_fd("Vector B\n", 1);
	while (i < all->qtt_b)
	{
		ft_putnbr_fd(all->vector_a[i], 1);
		ft_putstr_fd("\n", 1);
		i++;
	}
}

void	print_c(t_all *all)
{
	int	i;

	i = 0;
	ft_putstr_fd("Vector O\n", 1);
	while (i < all->qtt_t)
	{
		ft_putnbr_fd(all->vector_o[i], 1);
		ft_putstr_fd("\n", 1);
		i++;
	}
}
