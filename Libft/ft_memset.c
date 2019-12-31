/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:54:14 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:41:55 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Fill memory with a constant byte */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *tab;

	tab = s;
	if (s == 0 && n == 0)
		return (0);
	while (n--)
		*tab++ = (unsigned char)c;
	return (s);
}
