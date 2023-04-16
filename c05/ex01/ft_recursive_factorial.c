/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:14:25 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/14 17:11:26 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

/*
#include<stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(-1));
	return 0;
}
*/
