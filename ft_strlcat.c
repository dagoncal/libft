/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:05:03 by dagoncal          #+#    #+#             */
/*   Updated: 2022/12/20 16:26:28 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size == 0 || size <= dstsize)
		return (size + srcsize);
	i = 0;
	if (!size || size <= dstsize)
		return (size + srcsize);
	while (src[i] != '\0' && i < (size - dstsize - 1))
	{
		dst[dstsize + i] = src[i];
		i++;
	}	
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
