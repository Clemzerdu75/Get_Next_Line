/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:32:11 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:41:03 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns the number of bytes in the string pointed to by s, excluding the
terminating null bye ('\0'), but at most n. */
size_t	ft_strnlen(const char *s, size_t n)
{
	size_t i;

	i = 0;
	while (s[i] && i < n)
		i++;
	return (i);
}
