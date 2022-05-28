/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:57:20 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/19 19:34:14 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (aux == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		aux[i] = s1[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
