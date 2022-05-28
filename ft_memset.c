/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:44:22 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/11 13:35:44 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*aux;

	aux = (char *)b;
	while (len-- > 0)
		*(aux++) = (unsigned char)c;
	return (b);
}
