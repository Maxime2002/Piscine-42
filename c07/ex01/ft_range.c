/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:29:18 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/15 12:50:41 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (min <= 0)
		tab = malloc(sizeof(int) * (max - min));
	if (min > 0)
		tab = malloc(sizeof(int) * (max + min));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*
int main()
{
	ft_range(4, 6);
	return (0);
}
*/
