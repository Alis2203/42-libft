/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:29:05 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/18 23:03:01 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		while (needle[j] == haystack[i + j] && haystack[i + j] != '\0'
			&& i + j < len)
			j++;
		if (j == (size_t)ft_strlen(needle))
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (NULL);
}
