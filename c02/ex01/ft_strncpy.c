/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:02:58 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/08 14:55:16 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include<string.h>
int main()
{
	char dst[30] = "hello world";
	char src[30] = "new dest";
	unsigned int n = 12;
	ft_strncpy(dst, src, n);
	printf("%s", dst);

	printf("\n");

	char dst2[30] = "hello world";
	char src2[30] = "new dest";
	strncpy(dst2, src2, n);
	printf("%s", dst2);

	return 0;
}
*/
