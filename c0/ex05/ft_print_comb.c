/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:00:15 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/02 17:13:59 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	display(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	int	v;
	int	e;	

	v = 44;
	e = 32;
	b = a + 1;
	while (b < 57)
	{
		c = b + 1;
		while (c < 58)
		{
			display(a, b, c);
			if (a < 55)
			{
				write(1, &v, 1);
				write(1, &e, 1);
			}
			c++;
		}
		b++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = a + 1;
	c = b + 1;
	while (a < 56)
	{
		ft_print(a, b, c);
		a++;
	}	
}
