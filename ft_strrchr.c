/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:36:46 by dagoncal          #+#    #+#             */
/*   Updated: 2022/12/22 16:18:08 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	result = 0;
	if (c == '\0' && s[len] == '\0')
	{
		return ((char *)&s[len]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			result = (char *)&s[i];
		}
		i++;
	}
	return (result);
}
