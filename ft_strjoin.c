/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:06:01 by dagoncal          #+#    #+#             */
/*   Updated: 2022/12/13 12:38:08 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	i2;

	if (s1 && s2)
	{
		str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
				* sizeof(char));
		if (str)
		{
			i = 0;
			i2 = 0;
			while (s1[i2] != '\0')
				str[i++] = s1[i2++];
			i2 = 0;
			while (s2[i2] != '\0')
				str[i++] = s2[i2++];
			str[i] = '\0';
			return (str);
		}
		else
			return (0);
	}
	else
		return (0);
}
