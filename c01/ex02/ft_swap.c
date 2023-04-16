/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:48:17 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/03 12:42:29 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_swap(int *a, int *b)
{
	int	e;

	e = *a;
	*a = *b;
	*b = e;
}

/*
int main()
{
	int vala = 2;
	int valb = 1;
	int* pa = &vala;
	int* pb = &valb;
	ft_swap(pa, pb);
	ft_putchar(vala + '0');
	ft_putchar(valb + '0');
}
*/
