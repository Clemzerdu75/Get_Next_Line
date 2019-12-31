/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:53:38 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:28:41 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set */
int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
