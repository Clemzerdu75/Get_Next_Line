/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:41:37 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:37:46 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Scans the initial n bytes of the memory area pointed to by s for the first instance of c */ 
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *tab;

	tab = (const unsigned char *)s;
	while (n--)
	{
		if (*tab != (unsigned char)c)
			tab++;
		else
			return ((void *)tab);
	}
	return (0);
}
