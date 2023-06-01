/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:28:01 by dagoncal          #+#    #+#             */
/*   Updated: 2022/11/16 18:01:12 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str && s)
	{
		if (start >= ft_strlen(s))
			str[0] = s[ft_strlen(s)];
		else
			ft_strlcpy(str, &s[start], len + 1);
		return (str);
	}
	else
		return (0);
}
