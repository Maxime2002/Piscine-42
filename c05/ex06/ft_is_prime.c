/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:10:58 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/13 14:23:52 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		if (nb % i == 0 && i == nb)
			return (1);
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
int main ()
{
	printf("%d", ft_is_prime(22091));
	return 0;
}
*/
