/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:58:13 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:32:04 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Finds an occurence in a string */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}
