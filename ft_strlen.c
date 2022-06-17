/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:59:46 by alcastel          #+#    #+#             */
/*   Updated: 2022/05/31 00:16:37 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (*str++)
		cont++;
	return (cont);
}
