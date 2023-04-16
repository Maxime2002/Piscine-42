/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:45:25 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/15 12:56:29 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (min <= 0)
		*range = malloc(sizeof(int) * (max - min));
	if (min > 0)
		*range = malloc(sizeof(int) * (max + min));
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*
int main()
{
	int *tab;

	printf("valeur de retour : %d\n", ft_ultimate_range(&tab, 3, 6));
	for (int i = 0; i < ft_ultimate_range(&tab, 3, 6); i++) 
	{
        printf("%d\n", tab[i]);
	}
	free(tab);
	return (0);
}
*/
