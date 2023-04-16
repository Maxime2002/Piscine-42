/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:05:01 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/06 11:23:30 by mlangloi         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest [j] = '\0';
	return (dest);
}

/*
#include<stdio.h>
int main ()
{
	int i = 0;
        char    tab1[40] = {"bonjour"};
        char    tab2[40] = {" a la suite"};
        ft_strcat(tab1, tab2);
	while(i < 20)
        printf("%c", tab1[i++]);
        return 0;
}
*/
