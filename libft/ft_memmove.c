/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:54:52 by ykondrat          #+#    #+#             */
/*   Updated: 2017/01/26 19:05:43 by ykondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (dest >= src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			*((char*)dest + i) = *((char*)src + i);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*((char*)dest + i) = *((char*)src + i);
			i++;
		}
	}
	return (dest);
}
