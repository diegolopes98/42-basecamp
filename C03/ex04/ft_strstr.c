/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:09:26 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/18 23:43:27 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i_to_find;
	int		not_equal;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i_to_find = 0;
			not_equal = 0;
			while (to_find[i_to_find] != '\0')
			{
				if (str[i_to_find] != to_find[i_to_find])
					not_equal = 1;
				i_to_find++;
			}
			if (not_equal == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
