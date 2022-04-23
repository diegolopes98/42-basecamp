/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:14:51 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/17 21:45:21 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_put_hex(int c_number, int print_zero)
{
	char	*hex_map;

	hex_map = "0123456789abcdef";
	if (c_number >= 16)
	{
		ft_put_hex(c_number / 16, 0);
		ft_put_hex(c_number % 16, 0);
	}
	else
	{
		if (print_zero == 1)
			write(1, "0", 1);
		write(1, &hex_map[c_number], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			ft_put_hex(str[i], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
