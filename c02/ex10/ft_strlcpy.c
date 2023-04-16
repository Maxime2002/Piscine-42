/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:04:51 by mlangloi          #+#    #+#             */
/*   Updated: 2023/04/11 18:06:08 by mlangloi         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size < 1)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
#include<stdio.h>
#include<bsd/string.h>
int main ()
{
	int result = 0;
	unsigned int size = 3;
        char    tab1[40] = {"bonjour"};
        char    tab2[20] = {"suite de la phrase"};
        result = ft_strlcpy(tab1, tab2, size);
        printf("%s", tab1);
	printf("%c", ' ');
        printf("%d", result);

	printf("\n");

	int result2 = 0;
        char    tab3[40] = {"bonjour"};
        char    tab4[20] = {"suite de la phrase"};
        result2 = strlcpy(tab3, tab4, size);
        printf("%s", tab3);
	printf("%c", ' ');
        printf("%d", result2);


        return 0;
}
*/
