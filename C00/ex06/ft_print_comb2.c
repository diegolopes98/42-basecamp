/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 06:26:40 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/09 23:44:06 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(short int number)
{
	short int	tens;
	short int	units;

	tens = number / 10;
	units = number % 10;
	ft_putchar(tens + 48);
	ft_putchar(units + 48);
}

void	ft_print_pair_of_numbers(short int first, short int second)
{
	ft_print_number(first);
	ft_putchar(' ');
	ft_print_number(second);
	if (first != 98 || second != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	short int	difference;
	short int	first_number;
	short int	second_number;

	first_number = 0;
	second_number = 0;
	while (first_number < 99)
	{
		while (second_number < 100)
		{
			difference = first_number - second_number;
			if (difference != 0)
			{
				ft_print_pair_of_numbers(first_number, second_number);
			}
			second_number++;
		}
		first_number++;
		second_number = first_number + 1;
	}
}
