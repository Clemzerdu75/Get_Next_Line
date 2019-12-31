/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:13:49 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:35:13 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* If c is a uppercase letter puts it to lowercase */
int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
