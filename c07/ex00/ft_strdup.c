/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:54:53 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/14 20:24:20 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_ch;
	int		i;
	int		taille;

	new_ch = NULL;
	i = 0;
	taille = ft_strlen(src) + 1;
	new_ch = malloc(sizeof(char) * taille);
	if (new_ch == NULL)
		return (0);
	while (src[i])
	{
		new_ch[i] = src[i];
		i++;
	}
	new_ch[i] = '\0';
	return (new_ch);
}

/*
#include<string.h>
#include<stdio.h>
int main ()
{
	char c1[] = "hello";
	printf("%s\n", c1);
	printf("%s\n", strdup(c1));
	printf("%s", ft_strdup(c1));
	return 0;
}
*/
