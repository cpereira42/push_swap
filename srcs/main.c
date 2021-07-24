/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 00:08:11 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/24 10:04:53 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_all	all;
	int		i;

	if (argc == 1)
		return (0);
	reset_flags(&all, argc);
	if (all.vector_a == 0 || all.vector_b == 0)
		return (0);
	i = 1;
	if (verify_args(&all, argc, argv))
	{
		printf("Error\n");
		bye(&all);
	}
	if (argc <= 6)
		number_five(&all);
	if (argc > 6)
		more_hun(&all);
	print_f(&all);
	bye(&all);
	return (0);
}

void	first_passag(t_all *all)
{
	int	num_div;
	int	resp;
	int	last;

	num_div = 2;
	while (verify_a(all))
	{
		last = all->qtt_a;
		while (last > 0 && verify_a(all))
		{
			resp = all->vector_a[0] % num_div;
			if (resp < (num_div - num_div / 2))
				push_b(all);
			else
				r_a(all);
			last--;
		}
		back_a(all);
		num_div *= 2;
	}
}

void	number_five(t_all *all)
{
	while (all->qtt_a > 3 && verify_a(all))
		find_first (all);
	order_3(all);
	if (all->qtt_a < all->qtt_t)
		back_a(all);
}

void	back_a(t_all *all)
{
	all->qtt_b--;
	while (all->qtt_b > 0)
		push_a(all);
	push_a(all);
	all->qtt_b = 0;
}

void	order_3(t_all *all)
{
	if (verify_a(all))
	{
		if (all->vector_a[0] > all->vector_a[1] && all->vector_a[1]
			< all->vector_a[2] && all->vector_a[0] < all->vector_a[2])
			s_a(all);
		if (all->vector_a[0] > all->vector_a[1] && all->vector_a[1]
			> all->vector_a[2] && all->vector_a[0] > all->vector_a[2])
		{
			s_a(all);
			r_r_a(all);
		}
		if (all->vector_a[0] > all->vector_a[1] && all->vector_a[1]
			< all->vector_a[2] && all->vector_a[0] > all->vector_a[2])
			r_a(all);
		if (all->vector_a[0] < all->vector_a[1] && all->vector_a[1]
			> all->vector_a[2] && all->vector_a[0] < all->vector_a[2])
		{
			s_a(all);
			r_r_a(all);
		}
		if (all->vector_a[0] < all->vector_a[1] && all->vector_a[1]
			> all->vector_a[2] && all->vector_a[0] > all->vector_a[2])
			r_r_a(all);
	}
}
