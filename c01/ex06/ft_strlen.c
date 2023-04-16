/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:33:14 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/02 22:22:45 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        int     mod;
        int     nb_divided;

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
*/

int	ft_strlen(char *str)
{
	int	i;
	int	compte;

	compte = 0;
	i = 0;
	while (str[i] != 0)
	{
		compte++;
		i++;
	}
	return (compte);
}

/*

int main()
{
	int compte;
	char *str;

	compte = 0;
	str = "hellozorld";
	compte = ft_strlen(str);
	ft_putnbr(compte);
	return 0;
}
*/
