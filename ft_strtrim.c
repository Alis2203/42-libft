/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:51:32 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/22 17:09:55 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	size_t	i;
	size_t	f;

	i = 0;
	f = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[f]))
		f--;
	f = f - i + 1;
	aux = ft_substr(s1, i, f);
	return (aux);
}
