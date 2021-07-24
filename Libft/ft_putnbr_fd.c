/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpereira <cpereira@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:55:21 by cpereira          #+#    #+#             */
/*   Updated: 2021/07/23 20:20:32 by cpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	numero;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		numero = n * -1;
	}
	else
		numero = n;
	if (numero >= 10)
		ft_putnbr_fd(numero / 10, fd);
	ft_putchar_fd(numero % 10 + 48, fd);
}
