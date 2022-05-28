/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:05:11 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/11 18:45:43 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (a == NULL && b == NULL)
		return (NULL);
	while (n > 0)
	{
		*b = *a;
		n--;
		b++;
		a++;
	}
	return (dst);
}
