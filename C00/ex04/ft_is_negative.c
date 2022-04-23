/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:04:58 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/07 02:15:56 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	const char	negative = 'N';
	const char	positive = 'P';

	if (n >= 0)
	{
		ft_putchar(positive);
	}
	else
	{
		ft_putchar(negative);
	}
}
