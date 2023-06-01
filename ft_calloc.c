/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:39:56 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/16 17:44:58 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_alloc;

	mem_alloc = malloc(nmemb * size);
	if (!mem_alloc)
		return (0);
	ft_bzero(mem_alloc, nmemb * size);
	return (mem_alloc);
}
