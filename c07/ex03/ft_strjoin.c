/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:42:26 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/15 12:42:48 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

int	ft_taille(int size, char *sep, char **strs)
{
	int	taille;
	int	i;

	i = 0;
	taille = 0;
	while (i < size)
	{
		taille = taille + ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		taille = taille + ft_strlen(sep) * (size - 1);
	return (taille + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = malloc(sizeof (char) * ft_taille(size, sep, strs));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

/*
int main()
{
	char *strs[] = {"un", "deux", "trois", "quatre"};
	char sep[3] = {", "};

	printf("%s", ft_strjoin(4, strs, sep));
	return 0;
}
*/
