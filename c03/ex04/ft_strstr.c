/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:33:26 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/08 00:15:04 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(to_find) < 1)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if ((to_find[j + 1]) == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
int main ()
{
	char *result;
        char    tab1[40] = {"bjponjour"};
        char    tab2[40] = {"jo"};
        
	result = ft_strstr(tab1, tab2);
        printf("%s", result);
        return 0;
}
*/
