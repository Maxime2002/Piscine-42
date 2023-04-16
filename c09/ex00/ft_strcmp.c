/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:33:17 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/23 16:47:17 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0')
		return (0 - s2[i]);
	if (s2[i] == '\0')
		return (s1[i]);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}