/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:33:36 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/05 23:28:27 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	l_1(int x)
{
	int	i;

	i = 0;
	while (i != x)
	{
		if (i == 0)
		{
			ft_putchar('o');
		}
		else if (i == x -1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	l_2(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = y;
	while (j > 0)
	{
		while (i != x)
		{
			if (i == 0 || i == x - 1)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			i++;
		}
		j--;
	}
	ft_putchar('\n');
}	

void	l_3(int x)
{
	int	i;

	i = 0;
	while (i != x)
	{
		if (i == 0)
		{
			ft_putchar('o');
		}
		else if (i == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		l_1(x);
		while (i < y - 2)
		{	
			l_2(x, y);
			i++;
		}
		if (y >= 2)
		{
			l_3(x);
		}
	}
}
