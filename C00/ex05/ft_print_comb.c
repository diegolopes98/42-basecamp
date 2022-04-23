/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:20:21 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/14 15:01:08 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_separator(void)
{	
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_number(char hundreds, char tens, char units)
{
	ft_putchar(hundreds);
	ft_putchar(tens);
	ft_putchar(units);
}

void	ft_print_occurrence(char hundreds, char tens, char units)
{
	ft_print_number(hundreds, tens, units);
	if (hundreds != '7')
	{
		ft_print_separator();
	}
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	units;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				ft_print_occurrence(hundreds, tens, units);
				units++;
			}
			tens++;
			units = tens + 1;
		}
		hundreds++;
		tens = hundreds;
	}
}
