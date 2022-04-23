/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieperei <dieperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:01:31 by dieperei          #+#    #+#             */
/*   Updated: 2022/04/18 21:58:36 by dieperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;
	char			*ptr;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	ptr = dest + dest_len;
	i = 0;
	while (*src != '\0' && i < nb)
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
