/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:21:03 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/16 21:35:42 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Finds the square root of an integer, if it doesn't have one returns 0 */
int	ft_sqrt(int nb)
{
	int rac;

	rac = 1;
	if (nb < 0)
		return (0);
	while (rac * rac < nb)
		++rac;
	if (rac * rac == nb)
		return (rac);
	return (0);
}
