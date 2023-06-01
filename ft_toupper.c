/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:06:23 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/04 16:18:00 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(const int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
	{
		c -= 32;
	}
	return (c);
}
