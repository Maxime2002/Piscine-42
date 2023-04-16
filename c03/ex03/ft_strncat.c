/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:25:59 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/06 11:30:54 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	compte;

	compte = 0;
	i = 0;
	while (str[i] != 0)
	{
		compte++;
		i++;
	}
	return (compte);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	j;
	int	i;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0' && nb != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest [j] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int main ()
{
        int i = 0;
	int nb = 7;
        char    tab1[40] = {"bonjour"};
        char    tab2[40] = {" a la suite"};
        ft_strncat(tab1, tab2, nb);
        while(i < 20)
        printf("%c", tab1[i++]);
        return 0;
}
*/
