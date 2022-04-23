/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:32:22 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/11 13:41:38 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_combn(int n);

void	ft_print_separator(void)
{	
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_number_arr(int *number_arr, int n)
{
	char	number_to_print;
	int		index;

	index = 0;
	while (index < n)
	{
		number_to_print = number_arr[index] + 48;
		write(1, &number_to_print, 1);
		index++;
	}
}

void	ft_increment_number_arr(int *number_arr, int i_to_inc, int n)
{
	int	max;

	max = 9 - n + i_to_inc + 1;
	number_arr[i_to_inc] += 1;
	if (number_arr[i_to_inc] > max)
	{
		ft_increment_number_arr(number_arr, i_to_inc - 1, n);
		number_arr[i_to_inc] = number_arr[i_to_inc - 1] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	number_arr[10];
	int	index;
	int	index_to_increment;

	index = 0;
	while (index < n)
	{
		number_arr[index] = index;
		index++;
	}
	index_to_increment = n - 1;
	while (number_arr[0] < 9 - n + 1)
	{
		ft_print_number_arr(number_arr, n);
		ft_print_separator();
		ft_increment_number_arr(number_arr, index_to_increment, n);
	}
	ft_print_number_arr(number_arr, n);
}
