/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:24:28 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/05 20:16:34 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	e;

	e = *a;
	*a = *b;
	*b = e;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

/*
int main()
{
	int tab [5] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;

	ft_rev_int_tab(tab, size);
	while (i < 5)
	printf("%d", tab[i++]);
	return 0;
}
*/
