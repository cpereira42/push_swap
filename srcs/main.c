/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 00:08:11 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/16 17:55:16 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_flags(t_all *all, int argc)
{
	all->qtt_com = 0;
	all->qtt_a = 0;
	all->qtt_b = 0;
	all->vector_a = malloc((argc + 1) * sizeof(int *));
	all->vector_b = malloc((argc + 1) * sizeof(int *));
	all->qtt_t = argc - 1;
	ft_bzero(all->vector_a, argc);
	ft_bzero(all->vector_b, argc);
}

int	verify_args(t_all *all, int argc, char **argv)
{
	int	j;
	int	i;
	int	num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < (int)ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][0] != '-')
				return (1);
			j++;
		}
		if (argv[i][0] == '-')
			num = ft_atoi(&argv[i][1]) * -1;
		else
			num = ft_atoi(&argv[i][0]);
		if (checker_num(all, num))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_all	all;
	int		i;

	if (argc == 1)
	{
		printf("No Args\n");
		return (0);
	}
	reset_flags(&all, argc);
	if (all.vector_a == 0 || all.vector_b == 0)
		return (0);
	i = 1;
	if (verify_args(&all, argc, argv))
	{
		printf("invalidos\n");
		return (0);
	}
	while (all.qtt_a > 3 && verify_a(&all))
		find_first_second (&all);
	order_3(&all);
	if (all.qtt_a < all.qtt_t)
		org_a(&all);
	print_f(&all);
	return (0);
}

void	back_a(t_all *all)
{
	all->qtt_b--;
	while (all->qtt_b > 0)
	{
		if (all->vector_b[all->qtt_b] < all->vector_b[all->qtt_b - 1])
			s_b(all);
		push_a(all);
	}
	push_a(all);
}

void	order_3(t_all *all)
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
