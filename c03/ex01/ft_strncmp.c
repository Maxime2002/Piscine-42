/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:57:38 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/10 17:52:03 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (s1[i] == '\0')
		return (0 - s2[i]);
	if (s2[i] == '\0')
		return (s1[i]);
	while ((s1[i] != '\0' && s2[i] != '\0') && n != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}

/*
#include<string.h>
#include<stdio.h>
int main ()
{
        int     result = 0;
	int	n = 4;
        char    tab1[40] = {"bonjour"};
        char    tab2[40] = {"bonajour"};
        result = ft_strncmp(tab1, tab2, n);
        printf("%d", result);
	printf("\n");
	int     result2 = 0;
        char    tab3[40] = {"bonjour"};
        char    tab4[40] = {"bonajour"};
        result2 = strncmp(tab3, tab4, n);
        printf("%d", result2);

        return 0;
}
*/
