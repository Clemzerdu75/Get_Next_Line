/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:42:11 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/13 12:46:03 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies a function on each char of a string and store the result in a new string
well allocated */
char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	size;
	size_t	i;

	if (s)
	{
		size = ft_strlen(s);
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * size + 1)))
			return (0);
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[size] = '\0';
		return (str);
	}
	else
		return (0);
}
