/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:55:38 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/14 01:08:25 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last_i;
	int	swp;

	i = 0;
	last_i = size - 1;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab[last_i];
		tab[last_i] = swp;
		i++;
		last_i--;
	}
}
