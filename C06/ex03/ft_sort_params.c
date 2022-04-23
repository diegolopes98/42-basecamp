/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:42:26 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/21 07:04:32 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap_arr_values(char *tab[], int idx1, int idx2)
{
	char	*swp;

	swp = tab[idx1];
	tab[idx1] = tab[idx2];
	tab[idx2] = swp;
}

void	ft_sort_char_tab(char *tab[], int size)
{
	int	last_unsorted_index;
	int	current_index;

	last_unsorted_index = size - 1;
	while (last_unsorted_index > 0)
	{
		current_index = 0;
		while (current_index < last_unsorted_index)
		{
			if (ft_strcmp(tab[current_index], tab[current_index + 1]) > 0)
			{
				ft_swap_arr_values(tab, current_index, current_index + 1);
			}
			current_index++;
		}
		last_unsorted_index--;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*not_print;

	not_print = argv[0];
	ft_sort_char_tab(argv, argc);
	i = 0;
	while (i < argc)
	{
		if (ft_strcmp(not_print, argv[i]) != 0)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
		}
		i++;
	}
	return (0);
}
