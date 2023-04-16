/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpothin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:48:11 by cpothin           #+#    #+#             */
/*   Updated: 2023/03/19 16:53:57 by cpothin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_rush.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!(ft_error(argc, argv[1])))
			return (0);
		ft_engine("numbers.dict", argv[1]);
	}
	else if (argc == 3)
	{
		if (!(ft_error(argc, argv[2])))
			return (0);
		ft_engine(argv[1], argv[2]);
	}
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
}
