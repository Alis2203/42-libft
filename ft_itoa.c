/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicia.castellanos <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:05:26 by alicia.castel     #+#    #+#             */
/*   Updated: 2022/05/27 21:35:19 by alicia.castel    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numsize(int n)
{
	int	size;
	int	neg;

	size = 0;
	if (n < 0 && n > -2147483648)
	{
		size++;
		n = -n;
	}
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*aux;
	int		i;
	int		size;
	
	i = 0;
	size = ft_numsize(n);
	aux = (char *)malloc(sizeof(char) * ft_size(n) + 1)
	if (!aux)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
		
	while (i < size)
	{
		str[size - i] =  + '0';
		tmp /= 10;
		i++;
	}

	str[size] = '\0';
	return (str);
}
