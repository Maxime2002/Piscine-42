/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:08:54 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/11 23:05:27 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (i < power)
	{
		i++;
		res = nb * ft_recursive_power(nb, power - i);
	}
	return (res);
}

/*
#include<stdio.h>
int main ()
{
	printf("%d", ft_recursive_power(2, 4));
	return 0;
}
*/
