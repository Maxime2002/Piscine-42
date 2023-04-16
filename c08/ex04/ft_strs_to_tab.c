/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:28:30 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/20 16:28:31 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_ch;
	int		i;
	int		taille;

	new_ch = NULL;
	i = 0;
	taille = ft_strlen(src) + 1;
	new_ch = malloc(sizeof(char) * taille);
	if (new_ch == NULL)
		return (0);
	while (src[i])
	{
		new_ch[i] = src[i];
		i++;
	}
	new_ch[i] = '\0';
	return (new_ch);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * ac + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/*
#include<stdio.h>
int main(int argc, char **argv)
{
    t_stock_str *stock = ft_strs_to_tab(argc, argv);

    for (int i = 0; i < argc; i++) {
        printf("String %d:\n", i);
        printf("\tstr: %s\n", stock[i].str);
        printf("\tsize: %d\n", stock[i].size);
        printf("\tcopy: %s\n", stock[i].copy);
    }

    return 0;
}
*/
