/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:13:15 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/07 15:12:34 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	nb_devided;
	int	mod;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		mod = nb % 10;
		nb_devided = nb / 10;
		ft_putnbr(nb_devided);
	}
	if (nb > 9)
		ft_putchar(mod + '0');
	else
		ft_putchar(nb + '0');
}

/*
int main()
{
	ft_putnbr(42);
	return 0;
}
*/
