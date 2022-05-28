/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:54:31 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/21 20:55:51 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	size_t	j;
	size_t	i;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		aux[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		aux[i] = s2[j];
		j++;
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
