/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:50:14 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/25 18:26:41 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
		start = ft_strlen(s);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		aux[i] = s[start];
		i++;
		start++;
	}
	aux[i] = '\0';
	return (aux);
}
