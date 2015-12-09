/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpilotto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:07:24 by lpilotto          #+#    #+#             */
/*   Updated: 2015/12/09 12:16:11 by lpilotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	length;
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	str = ft_strnew(length);
	i = 0;
	while (i < length)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
