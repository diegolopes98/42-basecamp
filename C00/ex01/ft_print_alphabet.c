/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:21:39 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/07 01:47:54 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	const char	final_alphabet_letter_to_print = 'z';
	char		alphabet_letter_to_print;

	alphabet_letter_to_print = 'a';
	while (alphabet_letter_to_print <= final_alphabet_letter_to_print)
	{
		ft_putchar(alphabet_letter_to_print);
		alphabet_letter_to_print++;
	}
}
