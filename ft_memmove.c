/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:42:03 by dagoncal          #+#    #+#             */
/*   Updated: 2022/12/13 12:31:34 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dest;
	const char	*last_src;
	char		*last_dest;

	if (!dest && !src)
	{
		return (dest);
	}
	ptr_src = src;
	ptr_dest = dest;
	last_src = ptr_src + (n - 1);
	last_dest = ptr_dest + (n - 1);
	if (ptr_dest < ptr_src)
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		while (n--)
			*last_dest-- = *last_src--;
	}
	return (dest);
}
