/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:40:38 by alcastel          #+#    #+#             */
/*   Updated: 2022/06/15 19:02:00 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{	
	size_t	i;

	i = 0;
	if (s[i] && f)
	{
		while (i < ft_strlen(s))
		{
			f(i, &(s[i]));
			i++;
		}
	}
}
