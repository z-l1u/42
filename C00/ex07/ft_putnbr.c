/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhliu <zhliu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:36:23 by zhliu             #+#    #+#             */
/*   Updated: 2024/09/24 00:36:23 by zhliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	x;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb <= 9)
	{
		x = '0' + nb;
		write(1, &x, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// int	main(void)
// {
// 	ft_putnbr(-35);
// 	write(1,"\n", 1);
// 	ft_putnbr(0);
// 	write(1,"\n", 1);
// 	ft_putnbr(63);
// 	write(1,"\n", 1);
// 	ft_putnbr(-4925);
// 	write(1,"\n", 1);
// 	ft_putnbr(9294);
// }
