/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:41:14 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/18 18:37:36 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	should_capitalize;

	should_capitalize = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && should_capitalize == 1)
		{
			should_capitalize = 0;
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && should_capitalize == 0)
			str[i] += 32;
		if (
			str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'
		)
			should_capitalize = 1;
		else
			should_capitalize = 0;
		i++;
	}
	return (str);
}
