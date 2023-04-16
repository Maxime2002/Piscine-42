/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_chk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpothin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:47:35 by cpothin           #+#    #+#             */
/*   Updated: 2023/03/19 16:48:11 by cpothin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_module(char *str)
{
	int	module;

	if (ft_strlen(str) % 3 > 0)
		module = 1;
	else
		module = 0;
	return (module);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

char	*ft_strstr(char **str_array, int array_l, char *to_find)
{
	int		str_i;
	int		find_i;
	int		index;

	str_i = 0;
	index = 0;
	find_i = 0;
	while (str_i < array_l)
	{
		while (to_find[find_i] && (to_find[find_i] == str_array[str_i][index]))
		{
			find_i++;
			index++;
			if (str_array[str_i][index] == ':' && to_find[find_i] == '\0')
			{
				return (str_array[str_i]);
			}
		}
		str_i++;
		find_i = 0;
		index = 0;
	}
	return (0);
}
