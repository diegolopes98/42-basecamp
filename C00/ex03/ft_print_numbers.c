/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:58:29 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/07 02:01:11 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	const char	final_number_to_print = '9';
	char		number_to_print;

	number_to_print = '0';
	while (number_to_print <= final_number_to_print)
	{
		ft_putchar(number_to_print);
		number_to_print++;
	}
}
