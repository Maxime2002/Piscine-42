/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:12:08 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/06 15:27:38 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

/*
#include<stdio.h>
int main()
{
	int result = 0;
	char tab[40] = {"helloworld"};
	
	result = ft_strlen(tab);
	printf("%d", result);
	return 0; 
}
*/
