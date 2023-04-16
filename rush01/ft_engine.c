/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_engine.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpothin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:47:04 by cpothin           #+#    #+#             */
/*   Updated: 2023/03/19 18:22:37 by cpothin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_engine_nest(char *digits, char **dictionary, int counter_rows)
{
	int		j;

	j = 0;
	while (j < 3)
	{
		if (digits[j] != '0')
		{
			if (j == 0)
				ft_first_digit(dictionary, digits[j], counter_rows);
			if (j == 1)
				ft_second_digit(dictionary, digits, counter_rows);
			if (j == 2 && digits[1] != '1')
				ft_third_digit(dictionary, digits[j], counter_rows);
		}
		j++;
	}
}

void	ft_free_mem(char *str, char **arr, char **array, int counter_rows)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str) / 3 + ft_module(str))
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	i = 0;
	while (i < counter_rows)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	ft_engine(char *dictionary, char *str)
{
	char	**arr;
	char	**array;
	char	*dict;
	int		counter_rows;
	int		i;

	i = 0;
	arr = ft_allocate(str);
	array = ft_copy_dict_array(dictionary);
	dict = ft_read_dict(dictionary);
	counter_rows = ft_counter_rows(dict);
	if (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0')
	{
		ft_read_words(ft_strstr(array, counter_rows, "0"));
		return (0);
	}
	while (i < (ft_strlen(str) / 3 + ft_module(str)))
	{
		ft_engine_nest(arr[i], array, counter_rows);
		if (ft_strcmp(arr[i++], "000") != 0)
			ft_ord(array, counter_rows, ft_strlen(str) / 3 + ft_module(str), i);
	}
	ft_free_mem(str, arr, array, counter_rows);
	free(dict);
	return (0);
}
