/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:17:46 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/16 12:38:21 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = 0;
	while (i * i < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include<stdio.h>
int main()
{
	printf("%d", ft_sqrt(81));
	return 0;
}
*/