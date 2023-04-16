/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:55:13 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/08 22:20:40 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i +1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long	ft_negatif(long nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	return (nb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		mod;
	int		nb_devided;
	int		taille_base;
	long	nb;

	mod = 0;
	nb_devided = 0;
	taille_base = 0;
	nb = (long)nbr;
	if (ft_verif_base(base) == 1)
	{
		nb = ft_negatif(nb);
		while (base[taille_base] != '\0')
			taille_base++;
		if (nb > taille_base - 1)
		{
			mod = nb % taille_base;
			nb_devided = nb / taille_base;
			ft_putnbr_base(nb_devided, base);
		}
		if (nb > taille_base - 1)
			ft_putchar(base[mod]);
		else
			ft_putchar(base[nb]);
	}
}

/*
#include<stdio.h>
int	main()
{
	ft_putnbr_base(42, "0123456789");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(42, "01");
	printf("\n");
	ft_putnbr_base(42, "01kk56");
	printf("\n");
	ft_putnbr_base(117119117, "Uwu");
	printf("\n");
	ft_putnbr_base(4242, "poneyvif");
	return 0;
}
*/
