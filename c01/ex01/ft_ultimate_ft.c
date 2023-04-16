/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:38:57 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/02 15:46:58 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	mod;
	int	nb_divided;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		mod = nb % 10;
		nb_divided = nb / 10;
		ft_putnbr(nb_divided);
	}
	if (nb > 9)
		ft_putchar(mod + '0');
	else
		ft_putchar(nb + '0');
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
int main ()
{
	int  a = 35;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;
	ft_ultimate_ft(j);
	ft_putnbr(a);
	return 0;
}
*/
