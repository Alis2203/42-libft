/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicia.castellanos <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:05:26 by alicia.castel     #+#    #+#             */
/*   Updated: 2022/05/28 17:51:03 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numsize(int n)
{
	int	size;

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

void	*ft_fillarrneg(int n, char *aux, int size)
{
	int	i;

	i = 1;
	if (n == -2147483648)
	{
		n = 214748364;
		aux[size - 1] = 8 + '0';
		i++;
	}
	else if (n < 0)
	{
		n = -n;
	}	
	while (i <= size && (size - i) > 0)
	{
		aux[size - i] = (n % 10) + '0';
		n /= 10;
		i++;
		aux[0] = '-';
	}
	aux[size] = '\0';
	return (aux);
}

void	*ft_fillarrpos(int n, char *aux, int size)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		aux[size - i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	aux[size] = '\0';
	return (aux);
}

char	*ft_itoa(int n)
{
	char	*aux;
	int		size;

	size = ft_numsize(n);
	aux = (char *)malloc(sizeof(char) * ft_numsize(n) + 1);
	if (!aux)
		return (NULL);
	if (n >= 0)
		ft_fillarrpos(n, aux, size);
	else
		ft_fillarrneg(n, aux, size);
	return (aux);
}
