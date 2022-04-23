/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:25:59 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/20 15:26:00 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_get_abs_nbr(int nb)
{
	int	abs_nb;

	abs_nb = nb;
	if (nb < 0)
	{
		abs_nb = nb * -1;
	}
	return (abs_nb);
}

void	ft_putnbr(int nb)
{
	int	nb_to_print;
	int	abs_nb_to_print;

	nb_to_print = nb % 10;
	abs_nb_to_print = ft_get_abs_nbr(nb_to_print);
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	if (nb < 0 && nb / 10 == 0)
	{
		ft_putchar('-');
	}
	ft_putchar(abs_nb_to_print + 48);
}
