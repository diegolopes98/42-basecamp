/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 01:04:33 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/12 01:22:07 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap_arr_values(int *tab, int idx1, int idx2)
{
	int	swp;

	swp = tab[idx1];
	tab[idx1] = tab[idx2];
	tab[idx2] = swp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	last_unsorted_index;
	int	current_index;

	last_unsorted_index = size - 1;
	while (last_unsorted_index > 0)
	{
		current_index = 0;
		while (current_index < last_unsorted_index)
		{
			if (tab[current_index] > tab[current_index + 1])
			{
				ft_swap_arr_values(tab, current_index, current_index + 1);
			}
			current_index++;
		}
		last_unsorted_index--;
	}
}
