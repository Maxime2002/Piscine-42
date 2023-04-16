/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:18:16 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/06 22:46:14 by mlangloi         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (j >= 0)
	{
		i = 0;
		while (i < j)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			else
			{
				i++;
			}
		}
		j--;
	}
}

/*
int main()
{
        int tab [5] = {3, 2, 1, 5, 4};
        int size = 5;
        int i = 0;

        ft_sort_int_tab(tab, size);
        while (i < 5)
        printf("%d", tab[i++]);
        return 0;
}
*/
