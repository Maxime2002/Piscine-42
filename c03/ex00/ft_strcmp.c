/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:11:06 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/10 17:49:26 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0')
		return (0 - s2[i]);
	if (s2[i] == '\0')
		return (s1[i]);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include<string.h>
#include<stdio.h>
int main ()
{
	int	result = 0;
	char	tab1[40] = {"bon"};
	char	tab2[40] = {"hello"};
	result = ft_strcmp(tab1, tab2);
	printf("%d", result);
	printf("\n");
	int	result2 = 0;
	char	tab3[40] = {"bon"};
	char	tab4[40] = {"hello"};
	result2 = strcmp(tab3, tab4);
	printf("%d", result2);

	return 0;
}
*/
