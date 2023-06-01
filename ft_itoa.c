/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:37:14 by dagoncal          #+#    #+#             */
/*   Updated: 2022/12/13 12:34:33 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int nbr)
{
	unsigned int	size;

	size = 0;
	if (nbr <= 0)
		size++;
	while (nbr != 0)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}

static int	absolute(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int n)
{
	unsigned int	size;
	char			*str;

	size = get_size(n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--size] = absolute(n % 10) + 48;
		n /= 10;
	}
	return (str);
}
