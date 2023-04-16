/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:23:43 by mlangloi          #+#    #+#             */
/*   Updated: 2023/03/09 14:38:33 by mlangloi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_verif_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i +1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_convert(char nb, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != nb)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	num;
	int	i;

	i = 0;
	neg = 1;
	num = 0;
	if (ft_verif_base(base) == 1)
	{
		while (str[i] <= ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				neg = neg * -1;
		}
		while (str[i] >= 32 && str[i] <= 126)
		{
			num = num * ft_strlen(base) + ft_convert(str[i], base);
			i++;
		}
		return (num * neg);
	}
	return (0);
}

/*
int main ()
{
	ft_atoi_base("   --+-+-+-opnnn", "poneyvif");
	return 0;
}
*/
