/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:11:54 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/26 00:01:27 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			w++;
		i++;
	}
	return (w);
}

void	ft_freemall(char **aux, int w)
{
	while (w > 0)
	{
		w--;
		free(aux[w]);
	}
	free(aux);
}

char	**ft_fillmall(char const *s, char c, char **aux)
{
	int	start;
	int	w;
	int	i;

	i = 0;
	w = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			aux[w] = ft_substr(s, start, i - start + 1);
			if (!aux[w])
			{
				ft_freemall(aux, w);
				return (NULL);
			}
			w++;
		}
		i++;
	}
	aux[w] = NULL;
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	size_t	w;

	w = ft_wordcount(s, c);
	aux = (char **)malloc(sizeof(char *) * (w + 1));
	if (!aux)
		return (0);
	aux = ft_fillmall(s, c, aux);
	return (aux);
}
